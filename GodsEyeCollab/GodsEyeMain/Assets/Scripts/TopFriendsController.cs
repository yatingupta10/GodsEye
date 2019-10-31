using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using static ProfileParser;

//show up to 3 top friends in the connections view
public class TopFriendsController : MonoBehaviour
{
    public GameObject friendPrefab;
    public GameObject friendLocation;
    List<GameObject> friendPrefabs = new List<GameObject>();

    Vector3 friend1Pos = new Vector3(0.0f, 0.2f, 0.0f);
    Vector3 friend2Pos = new Vector3(0.0f, 0.0f, 0.0f);
    Vector3 friend3Pos = new Vector3(0.0f, -0.2f, 0.0f);

    string friendsImagesDirBase = "friend_pictures/";


    // Start is called before the first frame update
    void Start(){
        //CreateFriendArrays();
    }

    public void Begin(){
        CreateFriendArrays();
    }

    Sprite ImportImage(string imagePath){
        Debug.Log("path of image : " + imagePath);
        Texture2D image = Resources.Load(imagePath) as Texture2D;
        Debug.Log(image);
        return Sprite.Create(image, new Rect(0, 0, image.width, image.height), new Vector2(0.5f, 0.5f), 40);
    }

    void CreateFriendArrays(){
        //go through top friend list and create a base prefab for each friend (up to 3)
        //set the name text in the prefabs with the text from the friend object
        //import the image that is specified in the friend object and add that to the prefab
        //increment numFriend after each prefab is finished (its highest value is 3)

        //TextAsset jsonObj = Resources.LoadAll("profile_dir")[0] as TextAsset;
        //ProfileParser currentProf = ProfileParser.parseProfile(jsonObj.text);

        List<SocialMediaFriend> friends = MainDataController.instance.currentProf.profile.connections.social_media_friends;

        GameObject[] allObjects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];

        foreach (GameObject obj in allObjects){
            if (obj.tag == "RelationshipStatus")
            {
                obj.GetComponent<TextMeshPro>().text = MainDataController.instance.currentProf.profile.connections.relationship_status;
            }
        }

        /*if (GameObject.FindGameObjectWithTag("RelationshipStatus"))
        {
            GameObject.FindGameObjectWithTag("RelationshipStatus").GetComponent<TextMeshPro>().text = currentProf.profile.connections.relationship_status;
        }*/

        string friendsImagesDir = MainDataController.instance.currentProf.profile.connections.social_media_friends_images_dir;

        for (int i = 0; i < 3; i++)
        {
            friendPrefabs.Add(friendPrefab);

            //string friendImageName = "test.jpg";
            Sprite friendImage = ImportImage(friendsImagesDirBase + friendsImagesDir + "/" + friends[i].url);

            friendPrefabs[i].GetComponentInChildren<Image>().sprite = friendImage;
            friendPrefabs[i].GetComponentInChildren<Image>().preserveAspect = true;
            friendPrefabs[i].transform.GetChild(1).GetComponent<TextMeshPro>().text = friends[i].name;

            //setting same images for family
            //need to chnage this
            //resource.load not working for me

            if (i == 0)
            {
                friendPrefabs[i].transform.position = friend1Pos;
            }
            else if (i == 1)
            {
                friendPrefabs[i].transform.position = friend2Pos;
            }
            else if (i == 2)
            {
                friendPrefabs[i].transform.position = friend3Pos;
            }
            Instantiate(friendPrefabs[i], friendLocation.transform);
        }
    }
}
