using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class FinancialController : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        //TextAsset jsonObj = Resources.LoadAll("profile_dir")[0] as TextAsset;
        //ProfileParser currentProf = ProfileParser.parseProfile(jsonObj.text);
        /*
        if (GameObject.FindGameObjectWithTag("CompanyName"))
        {
            GameObject.FindGameObjectWithTag("CompanyName").GetComponent<TextMeshPro>().text = currentProf.profile.financial_info.current_company;
        }

        if (GameObject.FindGameObjectWithTag("CompanyPosition"))
        {
            GameObject.FindGameObjectWithTag("CompanyPosition").GetComponent<TextMeshPro>().text = currentProf.profile.financial_info.position;
        }

        if (GameObject.FindGameObjectWithTag("Salary"))
        {
            GameObject.FindGameObjectWithTag("Salary").GetComponent<TextMeshPro>().text = currentProf.profile.financial_info.salary_string;
        }*/
    }

    public void Begin(){
        GameObject[] allObjects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];

        foreach (GameObject obj in allObjects){
            if (obj.tag == "CompanyName"){
                obj.GetComponent<TextMeshPro>().text = MainDataController.instance.currentProf.profile.financial_info.current_company;
            }

            if (obj.tag == "CompanyPosition"){
                obj.GetComponent<TextMeshPro>().text = MainDataController.instance.currentProf.profile.financial_info.position;
            }

            if (obj.tag == "Salary"){
                obj.GetComponent<TextMeshPro>().text = MainDataController.instance.currentProf.profile.financial_info.salary_string;
            }
        }
    }
}
