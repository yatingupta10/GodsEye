using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
using static ProfileParser;

//controller for showing recent venmo transactions in the financial view
public class UsernameController : MonoBehaviour
{
	// Start is called before the first frame update
	void Start()
    {
        //loadUsernames();
    }

    public void Begin()
    {
        loadUsernames();
    }

	void loadUsernames()
	{
        //TextAsset jsonObj = Resources.LoadAll("profile_dir")[0] as TextAsset;
        //ProfileParser currentProf = ProfileParser.parseProfile(jsonObj.text);

        GameObject[] allObjects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];

        foreach (GameObject obj in allObjects){
            if (obj.tag == "FacebookUsername"){
                obj.GetComponent<TextMeshPro>().text = MainDataController.instance.currentProf.profile.social_media_info.facebook.username;
            }

            if (obj.tag == "InstagramUsername"){
                obj.GetComponent<TextMeshPro>().text = MainDataController.instance.currentProf.profile.social_media_info.instagram.username;
            }

            if (obj.tag == "LinkedinUsername"){
                obj.GetComponent<TextMeshPro>().text = MainDataController.instance.currentProf.profile.social_media_info.linkedin.username;
            }

            if (obj.tag == "TwitterUsername"){
                obj.GetComponent<TextMeshPro>().text = MainDataController.instance.currentProf.profile.social_media_info.twitter.username;
            }
        }


        //GameObject.FindGameObjectWithTag("FacebookUsername").GetComponent<TextMeshPro>().text = 
        //    MainDataController.instance.currentProf.profile.social_media_info.facebook.username;
        
        //GameObject.FindGameObjectWithTag("InstagramUsername").GetComponent<TextMeshPro>().text =
        //    MainDataController.instance.currentProf.profile.social_media_info.instagram.username;
        
        //GameObject.FindGameObjectWithTag("LinkedinUsername").GetComponent<TextMeshPro>().text =
        //    MainDataController.instance.currentProf.profile.social_media_info.linkedin.username;
        
        //GameObject.FindGameObjectWithTag("TwitterUsername").GetComponent<TextMeshPro>().text =
        //    MainDataController.instance.currentProf.profile.social_media_info.twitter.username;
    }

}
