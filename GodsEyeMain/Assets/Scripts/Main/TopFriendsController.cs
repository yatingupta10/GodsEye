using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

//show up to 3 top friends in the connections view
public class TopFriendsController : MonoBehaviour
{
    public GameObject baseFriendPrefab;

    int currentFriend = 0;

    Vector3 friend1Pos = new Vector3(0.0f, 0.2f, 0.0f);
    Vector3 friend2Pos = new Vector3(0.0f, 0.0f, 0.0f);
    Vector3 friend3Pos = new Vector3(0.0f, -0.2f, 0.0f);

    List<GameObject> friendPrefabs = new List<GameObject>();

    [HideInInspector]
    public string friendsImagesDir = "Testing/TopFriends";


    // Start is called before the first frame update
    void Start(){
        CreateFriendArrays();
    }

    Sprite ImportImage(string imagePath){
        Texture2D image = Resources.Load<Texture2D>(imagePath);
        return Sprite.Create(image, new Rect(0, 0, image.width, image.height), Vector2.zero);
    }

    void CreateFriendArrays(){
        //go through top friend list and create a base prefab for each friend (up to 3)
        //set the name text in the prefabs with the text from the friend object
        //import the image that is specified in the friend object and add that to the prefab
        //increment numFriend after each prefab is finished (its highest value is 3)

        Vector3 spawnPos = Vector3.zero;

        switch (currentFriend){
            case 0:
                spawnPos = friend1Pos;
                break;
            case 1:
                spawnPos = friend2Pos;
                break;
            case 2:
                spawnPos = friend3Pos;
                break;
        }


        //example for element 0 of the top friend list:
        friendPrefabs.Add(baseFriendPrefab);
        friendPrefabs[0].transform.GetChild(1).GetComponent<TextMeshPro>().text = "top friend name";

        string friendImageName = "test.jpg";
        Sprite friendImage = ImportImage(friendsImagesDir + "/" + friendImageName);

        friendPrefabs[0].GetComponentInChildren<Image>().sprite = friendImage;
        friendPrefabs[0].GetComponentInChildren<Image>().preserveAspect = true;

        Instantiate(friendPrefabs[0], spawnPos, Quaternion.identity);
        currentFriend++;
    }
}
