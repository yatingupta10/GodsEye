using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
using static ProfileParser;

public class InterestsController : MonoBehaviour
{


    string json_path = "profile_dir/";
    string fileName = "profile_gagan.json";

    public GameObject checkinsPrefab;
    public GameObject checkinlocation;
    List<GameObject> checkinsPrefabsList = new List<GameObject>();
    //public GameObject likedPrefab;



    Vector3 friend1Pos = new Vector3(0.0f, 0.2225f, 0.0f);
    Vector3 friend2Pos = new Vector3(0.0f, 0.075f, 0.0f);
    Vector3 friend3Pos = new Vector3(0.0f, -0.075f, 0.0f);
    Vector3 friend4Pos = new Vector3(0.0f, -0.225f, 0.0f);

    // Start is called before the first frame update
    void Start()
    {
        TextAsset jsonObj = Resources.LoadAll("profile_dir")[0] as TextAsset;
        ProfileParser currentProf = ProfileParser.parseProfile(jsonObj.text);
        List<Checkin> checkins = currentProf.profile.interests_info.checkins;
        List<string> likes = currentProf.profile.interests_info.recent_likes;

        Debug.Log("count of checkins  : " + checkins.Count.ToString());
        for (int i = 0; i < checkins.Count; i++)
        {
            checkinsPrefabsList.Add(checkinsPrefab);

            //set the text values for each transaction
            checkinsPrefabsList[i].transform.GetChild(1).GetComponent<TextMeshPro>().text = checkins[i].location;
            checkinsPrefabsList[i].transform.GetChild(2).GetComponent<TextMeshPro>().text = checkins[i].date;
            if (i == 0)
            {
                checkinsPrefabsList[i].transform.position = friend1Pos;
            }
            else if (i == 1)
            {
                checkinsPrefabsList[i].transform.position = friend2Pos;
            }
            else if (i == 2)
            {
                checkinsPrefabsList[i].transform.position = friend3Pos;
            }
            else if (i == 3)
            {
                checkinsPrefabsList[i].transform.position = friend4Pos;
            }
            Instantiate(checkinsPrefabsList[i], checkinlocation.transform);
        }


    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
