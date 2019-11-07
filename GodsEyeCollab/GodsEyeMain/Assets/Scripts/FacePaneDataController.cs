using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class FacePaneDataController : MonoBehaviour
{
    string faceImgDir = "face_images/";

    // Start is called before the first frame update
    void Start()
    {
        /*TextAsset jsonObj = Resources.LoadAll("profile_dir")[0] as TextAsset;

        ProfileParser currentProf = ProfileParser.parseProfile(jsonObj.text);
        int score = currentProf.score;
        string firstName = currentProf.profile.first_name;
        string lastName = currentProf.profile.last_name;
        Debug.Log("Score : " + score.ToString());
        Debug.Log("FirstName : " + firstName);
        Debug.Log("LastName : " + lastName);

        if (GameObject.FindGameObjectWithTag("FacePaneScore"))
        {
            GameObject.FindGameObjectWithTag("FacePaneScore").GetComponent<TextMeshPro>().text = score.ToString();
        }

        if (GameObject.FindGameObjectWithTag("FullNameTag"))
        {
            GameObject.FindGameObjectWithTag("FullNameTag").GetComponent<TextMeshPro>().text = firstName + " " + lastName;
        }*/
    }

    Sprite ImportImage(string imagePath){
        Texture2D image = Resources.Load(imagePath) as Texture2D;
        return Sprite.Create(image, new Rect(0, 0, image.width, image.height), Vector2.zero);
    }

    public void Begin()
    {
        //TextAsset jsonObj = Resources.LoadAll("profile_dir")[0] as TextAsset;

        //ProfileParser currentProf = ProfileParser.parseProfile(jsonObj.text);

        string faceImg = MainDataController.instance.currentProf.profile.face_image;
        Sprite face = ImportImage(faceImgDir + faceImg);

        int score = MainDataController.instance.currentProf.score;
        string firstName = MainDataController.instance.currentProf.profile.first_name;
        string lastName = MainDataController.instance.currentProf.profile.last_name;
        Debug.Log("Score : " + score.ToString());
        Debug.Log("FirstName : " + firstName);
        Debug.Log("LastName : " + lastName);

        GameObject[] allObjects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];

        foreach (GameObject obj in allObjects){
            if (obj.tag == "FacePane"){
                obj.GetComponentInChildren<Image>().sprite = face;
                obj.GetComponentInChildren<Image>().preserveAspect = true;
            }

            //if (GameObject.FindGameObjectWithTag("FacePaneScore"))
            if (obj.tag == "FacePaneScore"){
                //GameObject.FindGameObjectWithTag("FacePaneScore").GetComponent<TextMeshPro>().text = score.ToString();
                obj.GetComponent<TextMeshPro>().text = score.ToString();
            }

            //if (GameObject.FindGameObjectWithTag("FullNameTag"))
            if (obj.tag == "FullNameTag"){
                //GameObject.FindGameObjectWithTag("FullNameTag").GetComponent<TextMeshPro>().text = firstName + " " + lastName;
                obj.GetComponent<TextMeshPro>().text = firstName + " " + lastName;
            }
        }
    }
}
