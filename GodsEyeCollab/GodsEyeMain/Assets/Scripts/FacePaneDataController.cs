using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class FacePaneDataController : MonoBehaviour
{
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

    public void Begin()
    {
        //TextAsset jsonObj = Resources.LoadAll("profile_dir")[0] as TextAsset;

        //ProfileParser currentProf = ProfileParser.parseProfile(jsonObj.text);

        

        int score = MainDataController.instance.currentProf.score;
        string firstName = MainDataController.instance.currentProf.profile.first_name;
        string lastName = MainDataController.instance.currentProf.profile.last_name;
        Debug.Log("Score : " + score.ToString());
        Debug.Log("FirstName : " + firstName);
        Debug.Log("LastName : " + lastName);

        GameObject[] allObjects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];

        foreach (GameObject obj in allObjects){
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
