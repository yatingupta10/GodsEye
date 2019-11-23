using Newtonsoft.Json;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using System.Net.Http;
using System.Net.Http.Headers;

using TMPro;
using UnityEngine.UI;


using System.Drawing;
using Image = System.Drawing.Image;
using Graphics = System.Drawing.Graphics;

public class FaceAnalysis : MonoBehaviour
{
    /// <summary>
    /// Allows this class to behave like a singleton
    /// </summary>
    public static FaceAnalysis Instance;

    /// <summary>
    /// The analysis result text
    /// </summary>
    private TextMesh labelText;

    /// <summary>
    /// Bytes of the image captured with camera
    /// </summary>
    internal byte[] imageBytes;

    /// <summary>
    /// Path of the image captured with camera
    /// </summary>
    internal string imagePath;

    /// <summary>
    /// Base endpoint of Face Recognition Service
    /// </summary>
    const string baseEndpoint = "https://godseyefacerecognition.cognitiveservices.azure.com/face/v1.0/";

    /// <summary>
    /// Auth key of Face Recognition Service
    /// </summary>
    private const string key = "df5efbdb19b746139a5febca6bda2ddc";
    //c31e9561e2d14783a32f5f854be30345
    //df5efbdb19b746139a5febca6bda2ddc

    /// <summary>
    /// Id (name) of the created person group 
    /// </summary>
    private const string personGroupId = "538";

    /// <summary>
    /// Initialises this class
    /// </summary>
    private void Awake()
    {
        // Allows this instance to behave like a singleton
        Instance = this;

        // Add the ImageCapture Class to this Game Object
        //gameObject.AddComponent<ImageCapture>();

        // Create the text label in the scene
        //CreateLabel();
    }


    public static Image ResizeImage(Image imgToResize, Size destinationSize)
    {
        var originalWidth = imgToResize.Width;
        var originalHeight = imgToResize.Height;

        //how many units are there to make the original length
        var hRatio = (float)originalHeight / destinationSize.Height;
        var wRatio = (float)originalWidth / destinationSize.Width;

        //get the shorter side
        var ratio = System.Math.Min(hRatio, wRatio);

        var hScale = System.Convert.ToInt32(destinationSize.Height * ratio);
        var wScale = System.Convert.ToInt32(destinationSize.Width * ratio);

        //start cropping from the center
        var startX = (originalWidth - wScale) / 2;
        var startY = (originalHeight - hScale) / 2;

        //crop the image from the specified location and size
        var sourceRectangle = new Rectangle(startX, startY, wScale, hScale);

        //the future size of the image
        var bitmap = new Bitmap(destinationSize.Width, destinationSize.Height);

        //fill-in the whole bitmap
        var destinationRectangle = new Rectangle(0, 0, bitmap.Width, bitmap.Height);

        //generate the new image
        using (var g = Graphics.FromImage(bitmap))
        {
            g.InterpolationMode = System.Drawing.Drawing2D.InterpolationMode.HighQualityBicubic;
            g.DrawImage(imgToResize, destinationRectangle, sourceRectangle, GraphicsUnit.Pixel);
        }

        return bitmap;

    }

    /// <summary>
    /// Spawns cursor for the Main Camera
    /// </summary>
    private void CreateLabel()
    {
        // Create a sphere as new cursor
        GameObject newLabel = new GameObject();

        // Attach the label to the Main Camera
        newLabel.transform.parent = gameObject.transform;

        // Resize and position the new cursor
        newLabel.transform.localScale = new Vector3(0.4f, 0.4f, 0.4f);
        newLabel.transform.position = new Vector3(0f, 3f, 60f);

        // Creating the text of the Label
        labelText = newLabel.AddComponent<TextMesh>();
        labelText.anchor = TextAnchor.MiddleCenter;
        labelText.alignment = TextAlignment.Center;
        labelText.tabSize = 4;
        labelText.fontSize = 50;
        labelText.text = ".";
    }
    public class Receiver
    {
        public string faceId { get; set; }
    }

    /// <summary>
    /// Detect faces from a submitted image
    /// </summary>
    internal IEnumerator DetectFacesFromImage()
    {
        WWWForm webForm = new WWWForm();
        string detectFacesEndpoint = $"{baseEndpoint}detect";

        // Change the image into a bytes array
        imageBytes = GetImageAsByteArray(imagePath);

        Bitmap newImg = new Bitmap(imagePath);
        Image croppedImg = ResizeImage(newImg, new Size(1024, 1024));

        ImageConverter convertor = new ImageConverter();
        byte[] croppedImgBytes = (byte[])convertor.ConvertTo(croppedImg, typeof(byte[]));



        using (UnityWebRequest www =
            UnityWebRequest.Post(detectFacesEndpoint, webForm))
        {
            www.SetRequestHeader("Ocp-Apim-Subscription-Key", key);
            www.SetRequestHeader("Content-Type", "application/octet-stream");
            www.uploadHandler.contentType = "application/octet-stream";
            www.uploadHandler = new UploadHandlerRaw(imageBytes);
            //www.uploadHandler = new UploadHandlerRaw(croppedImgBytes);
            www.downloadHandler = new DownloadHandlerBuffer();

            yield return www.SendWebRequest();

            try
            {
                string jsonResponse = www.downloadHandler.text;
                
                FaceRecName.instance.displayText.text = jsonResponse;

                Receiver[] face_RootObject =
                    JsonConvert.DeserializeObject<Receiver[]>(jsonResponse);
                
                List<string> facesIdList = new List<string>();

                // Create a list with the face Ids of faces detected in image

                foreach (Receiver faceRO in face_RootObject)
                {
                    facesIdList.Add(faceRO.faceId);
                }

                if (facesIdList.Count > 0)
                {
                    StartCoroutine(IdentifyFaces(facesIdList));
                    yield break;
                }
            } catch (System.Exception e)
            {
                FaceRecName.instance.displayText.text = "No faces found";
            }
        }
    }

    /// <summary>
    /// Returns the contents of the specified file as a byte array.
    /// </summary>
    static byte[] GetImageAsByteArray(string imageFilePath)
    {
        FileStream fileStream = new FileStream(imageFilePath, FileMode.Open, FileAccess.Read);
        BinaryReader binaryReader = new BinaryReader(fileStream);
        return binaryReader.ReadBytes((int)fileStream.Length);
    }

    /// <summary>
    /// Identify the faces found in the image within the person group
    /// </summary>
    internal IEnumerator IdentifyFaces(List<string> listOfFacesIdToIdentify)
    {
        // Create the object hosting the faces to identify
        FacesToIdentify_RootObject facesToIdentify = new FacesToIdentify_RootObject();
        facesToIdentify.faceIds = new List<string>();
        facesToIdentify.personGroupId = personGroupId;
        foreach (string facesId in listOfFacesIdToIdentify)
        {
            facesToIdentify.faceIds.Add(facesId);
        }
        facesToIdentify.maxNumOfCandidatesReturned = 1;
        facesToIdentify.confidenceThreshold = 0.5;

        // Serialise to Json format
        string facesToIdentifyJson = JsonConvert.SerializeObject(facesToIdentify);
        // Change the object into a bytes array
        byte[] facesData = Encoding.UTF8.GetBytes(facesToIdentifyJson);

        WWWForm webForm = new WWWForm();
        string detectFacesEndpoint = $"{baseEndpoint}identify";

        using (UnityWebRequest www = UnityWebRequest.Post(detectFacesEndpoint, webForm))
        {
            www.SetRequestHeader("Ocp-Apim-Subscription-Key", key);
            www.SetRequestHeader("Content-Type", "application/json");
            www.uploadHandler.contentType = "application/json";
            www.uploadHandler = new UploadHandlerRaw(facesData);
            www.downloadHandler = new DownloadHandlerBuffer();

            yield return www.SendWebRequest();
            string jsonResponse = www.downloadHandler.text;
            Debug.Log($"Get Person - jsonResponse: {jsonResponse}");

            Candidate_RootObject[] candidate_RootObject = JsonConvert.DeserializeObject<Candidate_RootObject[]>(jsonResponse);

            // For each face to identify that has been submitted, display its candidate
            foreach (Candidate_RootObject candidateRO in candidate_RootObject)
            { 
                if (candidateRO.candidates.Count > 0)
                {
                    StartCoroutine(GetPerson(candidateRO.candidates[0].personId));
                    yield break;
                } else
                {
                    FaceRecName.instance.displayText.text = "No matching\nperson found";
                }

                // Delay the next "GetPerson" call, so all faces candidate are displayed properly
                yield return new WaitForSeconds(3);
            }
        }
    }

    /// <summary>
    /// Provided a personId, retrieve the person name associated with it
    /// </summary>
    internal IEnumerator GetPerson(string personId)
    {
        string getGroupEndpoint = $"{baseEndpoint}persongroups/{personGroupId}/persons/{personId}?";
        WWWForm webForm = new WWWForm();

        using (UnityWebRequest www = UnityWebRequest.Get(getGroupEndpoint))
        {
            www.SetRequestHeader("Ocp-Apim-Subscription-Key", key);
            www.downloadHandler = new DownloadHandlerBuffer();
            yield return www.SendWebRequest();
            string jsonResponse = www.downloadHandler.text;

            Debug.Log($"Get Person - jsonResponse: {jsonResponse}");

            IdentifiedPerson_RootObject identifiedPerson_RootObject = JsonConvert.DeserializeObject<IdentifiedPerson_RootObject>(jsonResponse);

            FaceRecName.instance.recName = identifiedPerson_RootObject.name;
            FaceRecName.instance.displayText.text = "Face Found:\n" + identifiedPerson_RootObject.name;
            FaceRecName.instance.Begin();
            yield break;
        }
    }

    /// <summary>
    /// The Person Group object
    /// </summary>
    public class Group_RootObject
    {
        public string personGroupId { get; set; }
        public string name { get; set; }
        public object userData { get; set; }
    }

    /// <summary>
    /// The Person Face object
    /// </summary>

    /// <summary>
    /// Collection of faces that needs to be identified
    /// </summary>
    public class FacesToIdentify_RootObject
    {
        public string personGroupId { get; set; }
        public List<string> faceIds { get; set; }
        public int maxNumOfCandidatesReturned { get; set; }
        public double confidenceThreshold { get; set; }
    }

    /// <summary>
    /// Collection of Candidates for the face
    /// </summary>
    public class Candidate_RootObject
    {
        public string faceId { get; set; }
        public List<Candidate> candidates { get; set; }
    }

    public class Candidate
    {
        public string personId { get; set; }
        public double confidence { get; set; }
    }

    /// <summary>
    /// Name and Id of the identified Person
    /// </summary>
    public class IdentifiedPerson_RootObject
    {
        public string personId { get; set; }
        public string name { get; set; }
    }
}
