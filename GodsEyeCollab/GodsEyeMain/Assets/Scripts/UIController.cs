using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIController : MonoBehaviour
{
    //how long after pressing the face button the categories show up
    public float categoryViewTime;

    [Header("All Views")]
    public GameObject mainUI;

    public GameObject facePane;
    public GameObject centerFacePane;
    public GameObject rightScoreFacePane;

    public GameObject navBar;
    public GameObject backgroundScreen;

    public GameObject categoryView;
    public GameObject usernameView;
    public GameObject personalView;
    public GameObject financialView;
    public GameObject interestsView;
    public GameObject connectionsView;

    List<GameObject> viewList = new List<GameObject>();


    [Header("Navigation Bar Buttons")]
    public GameObject categoryButton;
    public GameObject usernameButton;
    public GameObject personalButton;
    public GameObject financialButton;
    public GameObject interestsButton;
    public GameObject connectionsButton;

    List<GameObject> navList = new List<GameObject>();

    [Header("Navigation Bar Icons")]
    public GameObject usernameIcon;
    public GameObject personalIcon;
    public GameObject financialIcon;
    public GameObject interestsIcon;
    public GameObject connectionsIcon;

    List<GameObject> iconList = new List<GameObject>();
    

    // Start is called before the first frame update
    void Start(){
        viewList.Add(facePane);
        viewList.Add(centerFacePane);
        viewList.Add(rightScoreFacePane);
        viewList.Add(navBar);
        viewList.Add(categoryView);
        viewList.Add(usernameView);
        viewList.Add(personalView);
        viewList.Add(financialView);
        viewList.Add(interestsView);
        viewList.Add(connectionsView);

        navList.Add(categoryButton);
        navList.Add(usernameButton);
        navList.Add(personalButton);
        navList.Add(financialButton);
        navList.Add(interestsButton);
        navList.Add(connectionsButton);

        iconList.Add(usernameIcon);
        iconList.Add(personalIcon);
        iconList.Add(financialIcon);
        iconList.Add(interestsIcon);
        iconList.Add(connectionsIcon);
    }


    public void CategoryViewFromButton(){
        Invoke("MainView", categoryViewTime);
    }


    void DeactivateAll(){
        DeactivateAllViews();
        DeactivateAllNavButtons();
        DeactivateAllNavIcons();
        UnFocusAllButtons();
    }
    
    //disable all views
    void DeactivateAllViews(){
        //this will be replaced by an animation
        foreach (GameObject obj in viewList){
            obj.SetActive(false);
        }
    }

    //disable all nav bar buttons
    void DeactivateAllNavButtons(){
        foreach (GameObject obj in navList){
            obj.SetActive(false);
        }
    }

    //disable all nave bar icons
    void DeactivateAllNavIcons(){
        foreach (GameObject obj in iconList){
            obj.SetActive(false);
        }
    }

    void UnFocusAllButtons(){

    }


    void ActivateView(int viewNum){
        viewList[viewNum].SetActive(true);
    }

    void ActivateAllNavButtons(){
        foreach (GameObject obj in navList){
            obj.SetActive(true);
        }
    }

    void DeactivateNavButton(int btnNum){
        navList[btnNum].SetActive(false);
    }

    void ActivateIcon(int iconNum){
        iconList[iconNum].SetActive(true);
    }


    //display the categories after the face is clicked
    //also go back to the category view from the back button in any of the category views (except the usrenames)
    public void MainView(){
        DeactivateAllViews();

        ActivateView(viewList.IndexOf(categoryView));
        ActivateView(viewList.IndexOf(facePane));
    }

    
    //show the usernames
    public void UsernameView(){
        DeactivateAll();

        ActivateView(viewList.IndexOf(usernameView));
        ActivateView(viewList.IndexOf(centerFacePane));

        ActivateView(viewList.IndexOf(navBar));

        ActivateAllNavButtons();
        DeactivateNavButton(navList.IndexOf(usernameButton));
        ActivateIcon(iconList.IndexOf(usernameIcon));
    }


    //methods for category buttons as well as navBar buttons
    public void PersonalView(){
        DeactivateAll();

        ActivateView(viewList.IndexOf(personalView));
        ActivateView(viewList.IndexOf(centerFacePane));
        //will probably change this to rightScoreFacePane

        ActivateView(viewList.IndexOf(navBar));

        ActivateAllNavButtons();
        DeactivateNavButton(navList.IndexOf(personalButton));
        ActivateIcon(iconList.IndexOf(personalIcon));
    }

    public void FinancialView(){
        DeactivateAll();

        ActivateView(viewList.IndexOf(financialView));
        ActivateView(viewList.IndexOf(centerFacePane));

        ActivateView(viewList.IndexOf(navBar));

        ActivateAllNavButtons();
        DeactivateNavButton(navList.IndexOf(financialButton));
        ActivateIcon(iconList.IndexOf(financialIcon));
    }

    public void InterestsView(){
        DeactivateAll();

        ActivateView(viewList.IndexOf(interestsView));
        ActivateView(viewList.IndexOf(centerFacePane));

        ActivateView(viewList.IndexOf(navBar));

        ActivateAllNavButtons();
        DeactivateNavButton(navList.IndexOf(interestsButton));
        ActivateIcon(iconList.IndexOf(interestsIcon));
    }

    public void ConnectionsView(){
        DeactivateAll();

        ActivateView(viewList.IndexOf(connectionsView));
        ActivateView(viewList.IndexOf(rightScoreFacePane));

        ActivateView(viewList.IndexOf(navBar));

        ActivateAllNavButtons();
        DeactivateNavButton(navList.IndexOf(connectionsButton));
        ActivateIcon(iconList.IndexOf(connectionsIcon));
    }


    //accept button
    public void SaveResults(){
        mainUI.SetActive(false);
    }

    //reject button
    public void DiscardResults(){
        mainUI.SetActive(false);
    }
}
