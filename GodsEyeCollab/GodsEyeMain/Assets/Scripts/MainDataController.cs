using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainDataController : MonoBehaviour
{
    public static MainDataController instance;

    public GameObject mainUI;
    public GameObject cameraRectangle;

    public GameObject initialFacePane;

    [HideInInspector]
    public ProfileParser currentProf;

    //put all data controllers here
    [Header("All Data Controllers")]
    public GameObject FaceData;
    public GameObject UsernameData;
    public GameObject PersonalData;
    public GameObject RecentImagesData;
    public GameObject FinancialData;
    public GameObject CompanyLogoData;
    public GameObject RecentTransactionsData;
    public GameObject InterestsData;
    public GameObject FamilyMemberData;
    public GameObject TopFriendData;


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
        Display();

        string profileJSON = "profile_" + FaceRecName.instance.recName;

        TextAsset jsonObj = Resources.Load("profile_dir/" + profileJSON) as TextAsset;
        currentProf = ProfileParser.parseProfile(jsonObj.text);

        FaceData.GetComponent<FacePaneDataController>().Begin();
        UsernameData.GetComponent<UsernameController>().Begin();
        PersonalData.GetComponent<PersonalController>().Begin();
        RecentImagesData.GetComponent<RecentImagesController>().Begin();
        FinancialData.GetComponent<FinancialController>().Begin();
        CompanyLogoData.GetComponent<LogoController>().Begin();
        RecentTransactionsData.GetComponent<RecentTransactionsController>().Begin();
        InterestsData.GetComponent<InterestsController>().Begin();
        FamilyMemberData.GetComponent<FamilyMembersController>().Begin();
        TopFriendData.GetComponent<TopFriendsController>().Begin();
    }

    void Display()
    {
        mainUI.SetActive(true);
        initialFacePane.GetComponent<FacePaneController>().setActive();
        cameraRectangle.SetActive(false);
    }
}
