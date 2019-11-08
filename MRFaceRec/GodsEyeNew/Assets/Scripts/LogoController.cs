using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//controller for showing the logo of the target's employer in the financial view
public class LogoController : MonoBehaviour
{
    public GameObject companyLogo;

    //target's company logo will be stored in this directory when pulling in user data
    string companyLogoDirBase = "company_logos/";

    Sprite logo;


    // Start is called before the first frame update
    void Start(){
        //ImportCompanyLogo();
    }

    void ImportCompanyLogo(){
        string logoDir = MainDataController.instance.currentProf.profile.financial_info.company_logo;

        Texture2D tex = Resources.LoadAll(companyLogoDirBase + logoDir)[0] as Texture2D;
        logo = Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), Vector2.zero);

        companyLogo.GetComponentInChildren<Image>().sprite = logo;
        companyLogo.GetComponentInChildren<Image>().preserveAspect = true;
    }

    public void Begin(){
        ImportCompanyLogo();
    }
}
