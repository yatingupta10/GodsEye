using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIController : MonoBehaviour
{
    public GameObject mainUI;
    public List<GameObject> viewList = new List<GameObject>();
    //views are added to this list in a very specific order, so don't change the list indexes

    //used for username view's back button
    int currentView = -1;

    //how long after pressing the face button the categories show up
    public float categoryViewTime;

    // Start is called before the first frame update
    void Start(){
        
    }


    public void CategoryViewFromButton(){
        Invoke("MainView", categoryViewTime);
    }

    
    //disable all views
    void DeactivateAllViews(){
        foreach (GameObject obj in viewList){
            obj.SetActive(false);
        }
    }


    //display the categories after the face is clicked
    //also go back to the category view from the back button in any of the category views (except the usrenames)
    public void MainView(){
        DeactivateAllViews();

        viewList[0].SetActive(true);
        currentView = 0;
    }


    //show the usernames
    public void UsernameView(){
        DeactivateAllViews();

        viewList[1].SetActive(true);
    }


    //methods for category buttons
    public void PersonalView(){
        DeactivateAllViews();

        viewList[2].SetActive(true);
        currentView = 2;
    }

    public void FinancialView(){
        DeactivateAllViews();

        viewList[3].SetActive(true);
        currentView = 3;
    }

    public void InterestsView(){
        DeactivateAllViews();

        viewList[4].SetActive(true);
        currentView = 4;
    }

    public void ConnectionsView(){
        DeactivateAllViews();

        viewList[5].SetActive(true);
        currentView = 5;
    }


    //go back to previous view from the usernames
    public void UsernamePreviousView(){
        DeactivateAllViews();

        viewList[currentView].SetActive(true);
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
