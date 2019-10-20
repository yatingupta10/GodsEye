using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//controller for showing the logo of the target's employer in the financial view
public class LogoController : MonoBehaviour
{
    public GameObject companyLogo;

    //target's company logo will be stored in this directory when pulling in user data
    [HideInInspector]
    public string recentImageDir = "Testing/EmployerLogo";

    Sprite logo;


    // Start is called before the first frame update
    void Start(){
        ImportCompanyLogo();
    }

    void ImportCompanyLogo(){
        Object[] images = Resources.LoadAll(recentImageDir, typeof(Texture2D));

        //for all images in the directory (there should be only one), create a sprite for them
        foreach (Object obj in images){
            Texture2D tex = (Texture2D)obj;
            logo = Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), Vector2.zero);
        }

        companyLogo.GetComponentInChildren<Image>().sprite = logo;
        companyLogo.GetComponentInChildren<Image>().preserveAspect = true;
    }
}
