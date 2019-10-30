using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
using static ProfileParser;

public class PersonalController : MonoBehaviour
{

	string json_path = "profile_dir/";
	string fileName = "profile_gagan.json";



	// Start is called before the first frame update
	void Start()
    {
		TextAsset jsonObj = Resources.LoadAll("profile_dir")[0] as TextAsset;
		ProfileParser currentProf = ProfileParser.parseProfile(jsonObj.text);
		PersonalInfo personalInfo = currentProf.profile.personal_info;

		if (GameObject.FindGameObjectWithTag("AgeTag"))
		{
			GameObject.FindGameObjectWithTag("AgeTag").GetComponent<TextMeshPro>().text = personalInfo.age.ToString();
		}



		if (GameObject.FindGameObjectWithTag("ResidenceStreet"))
		{
			GameObject.FindGameObjectWithTag("ResidenceStreet").GetComponent<TextMeshPro>().text = personalInfo.residence.apt;
		}
		



		if (GameObject.FindGameObjectWithTag("ResidenceCity"))
		{
			GameObject.FindGameObjectWithTag("ResidenceCity").GetComponent<TextMeshPro>().text = personalInfo.residence.city;
		}
		



		if (GameObject.FindGameObjectWithTag("ResidenceState"))
		{
			GameObject.FindGameObjectWithTag("ResidenceState").GetComponent<TextMeshPro>().text = personalInfo.residence.state;
		}
	



		if (GameObject.FindGameObjectWithTag("Edu1TextDegree"))
		{
			GameObject.FindGameObjectWithTag("Edu1TextDegree").GetComponent<TextMeshPro>().text = personalInfo.education[0].degree;
		}
		



		if (GameObject.FindGameObjectWithTag("Edu1TextMajor"))
		{
			GameObject.FindGameObjectWithTag("Edu1TextMajor").GetComponent<TextMeshPro>().text = personalInfo.education[0].major;
		}
	



		if (GameObject.FindGameObjectWithTag("Edu1TextTenure"))
		{
			GameObject.FindGameObjectWithTag("Edu1TextTenure").GetComponent<TextMeshPro>().text = personalInfo.education[0].tenure;
		}
		



		if (GameObject.FindGameObjectWithTag("Edu2TextDegree"))
		{
			GameObject.FindGameObjectWithTag("Edu2TextDegree").GetComponent<TextMeshPro>().text = personalInfo.education[1].degree;
		}
		



		if (GameObject.FindGameObjectWithTag("Edu2TextMajor"))
		{
			GameObject.FindGameObjectWithTag("Edu2TextMajor").GetComponent<TextMeshPro>().text = personalInfo.education[1].major;
		}
	



		if (GameObject.FindGameObjectWithTag("Edu2TextTenure"))
		{
			GameObject.FindGameObjectWithTag("Edu2TextTenure").GetComponent<TextMeshPro>().text = personalInfo.education[1].tenure;
		}



		if (GameObject.FindGameObjectWithTag("EmailTextTag"))
		{
			GameObject.FindGameObjectWithTag("EmailTextTag").GetComponent<TextMeshPro>().text = personalInfo.email;
		}



		if (GameObject.FindGameObjectWithTag("PhoneTextTag"))
		{
			GameObject.FindGameObjectWithTag("PhoneTextTag").GetComponent<TextMeshPro>().text = personalInfo.contact_info.mobile;
		}

	}

    // Update is called once per frame
    void Update()
    {
        
    }
}
