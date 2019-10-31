using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
using static ProfileParser;

public class PersonalController : MonoBehaviour
{
	// Start is called before the first frame update
	void Start()
    {
		/*TextAsset jsonObj = Resources.LoadAll("profile_dir")[0] as TextAsset;
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
		}*/

	}

    public void Begin(){
        //TextAsset jsonObj = Resources.LoadAll("profile_dir")[0] as TextAsset;
        //ProfileParser currentProf = ProfileParser.parseProfile(jsonObj.text);
        
        PersonalInfo personalInfo = MainDataController.instance.currentProf.profile.personal_info;

        GameObject[] allObjects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];

        foreach (GameObject obj in allObjects){
            if (obj.tag == "AgeTag"){
                obj.GetComponent<TextMeshPro>().text = personalInfo.age.ToString();
            }

            if (obj.tag == "ResidenceStreet"){
                obj.GetComponent<TextMeshPro>().text = personalInfo.residence.apt;
            }

            if (obj.tag == "ResidenceCity"){
                obj.GetComponent<TextMeshPro>().text = personalInfo.residence.city;
            }

            if (obj.tag == "ResidenceState"){
                obj.GetComponent<TextMeshPro>().text = personalInfo.residence.state;
            }

            if (obj.tag == "Edu1TextDegree"){
                obj.GetComponent<TextMeshPro>().text = personalInfo.education[0].degree;
            }

            if (obj.tag == "Edu1TextMajor"){
                obj.GetComponent<TextMeshPro>().text = personalInfo.education[0].major;
            }

            if (obj.tag == "Edu1TextTenure"){
                obj.GetComponent<TextMeshPro>().text = personalInfo.education[0].tenure;
            }

            if (obj.tag == "Edu2TextDegree"){
                obj.GetComponent<TextMeshPro>().text = personalInfo.education[1].degree;
            }

            if (obj.tag == "Edu2TextMajor"){
                obj.GetComponent<TextMeshPro>().text = personalInfo.education[1].major;
            }

            if (obj.tag == "Edu2TextTenure"){
                obj.GetComponent<TextMeshPro>().text = personalInfo.education[1].tenure;
            }

            if (obj.tag == "EmailTextTag"){
                obj.GetComponent<TextMeshPro>().text = personalInfo.email;
            }

            if (obj.tag == "PhoneTextTag"){
                obj.GetComponent<TextMeshPro>().text = personalInfo.contact_info.mobile;
            }
        }

    /*
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

        if (GameObject.FindGameObjectWithTag("EmailTextTag")){
            GameObject.FindGameObjectWithTag("EmailTextTag").GetComponent<TextMeshPro>().text = personalInfo.email;
        }

        if (GameObject.FindGameObjectWithTag("PhoneTextTag"))
        {
            GameObject.FindGameObjectWithTag("PhoneTextTag").GetComponent<TextMeshPro>().text = personalInfo.contact_info.mobile;
        }
    */
    }
}
