using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class FacePaneDataController : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        TextAsset jsonObj = Resources.LoadAll("profile_dir")[0] as TextAsset;

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
        }
    }
}
