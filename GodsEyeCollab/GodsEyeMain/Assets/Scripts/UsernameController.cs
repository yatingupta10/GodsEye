using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
using static ProfileParser;

//controller for showing recent venmo transactions in the financial view
public class UsernameController : MonoBehaviour
{
	
	string json_path = "profile_dir/";
	string fileName = "profile_gagan.json";

	// Start is called before the first frame update
	void Start()
    {
		loadUsernames();
	}
	void loadUsernames()
	{
		TextAsset jsonObj = Resources.LoadAll("profile_dir")[0] as TextAsset;
		ProfileParser currentProf = ProfileParser.parseProfile(jsonObj.text);
        GameObject.FindGameObjectWithTag("FacebookUsername").GetComponent<TextMeshPro>().text = currentProf.profile.social_media_info.facebook.username;
        GameObject.FindGameObjectWithTag("InstagramUsername").GetComponent<TextMeshPro>().text = currentProf.profile.social_media_info.instagram.username;
        GameObject.FindGameObjectWithTag("LinkedinUsername").GetComponent<TextMeshPro>().text = currentProf.profile.social_media_info.linkedin.username;
        GameObject.FindGameObjectWithTag("TwitterUsername").GetComponent<TextMeshPro>().text = currentProf.profile.social_media_info.twitter.username;
    }

}
