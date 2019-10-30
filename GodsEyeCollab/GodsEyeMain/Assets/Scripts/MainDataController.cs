using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainDataController : MonoBehaviour
{
    public static MainDataController instance;

    public GameObject mainUI;
    public GameObject cameraRectangle;

    [HideInInspector]
    public ProfileParser currentProf;

    //put all data controllers here
    //[Header("All Data Controllers")]


    // Start is called before the first frame update
    void Start(){
        if (instance == null){
            instance = this;
        } else if (instance != this){
            Destroy(gameObject);
        }
    }

    //parse the json here
    //then call all data controller's Begin() methods so they add data to the UI
    public void InsertData(){
        string profileJSON = "profile_" + FaceRecName.instance.recName;

        TextAsset jsonObj = Resources.Load("profile_dir/" + profileJSON) as TextAsset;
        currentProf = ProfileParser.parseProfile(jsonObj.text);

        

        Display();
    }

    void Display()
    {
        mainUI.SetActive(true);
        cameraRectangle.SetActive(false);
    }
}
