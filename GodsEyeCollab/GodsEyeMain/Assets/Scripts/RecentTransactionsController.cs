using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
using static ProfileParser;

//controller for showing recent venmo transactions in the financial view
public class RecentTransactionsController : MonoBehaviour
{
    public GameObject transactionDataPrefab;

    public GameObject upperLocation; //location of top data block
    public GameObject lowerLocation; //location of bottom data block

    public GameObject upButton; //previous button
    public GameObject downButton; //next button

    int numTransactions;
    int currentTransaction = 0;

    List<VenmoTx> transactionData;
    List<GameObject> recentTransactions = new List<GameObject>();


    //recent transaction data can be stored in this directory when pulling in user data
    public string recentTransactionDir = "Testing/RecentTransactions";
    string json_path = "profile_dir/";
    string fileName = "profile_gagan.json";

    //TextAsset jsonObj = Resources.LoadAll("profile_dir")[0] as TextAsset;


    // Start is called before the first frame update
    void Start(){
        CreateTransactionsArrays();
       

        toggleUpButton(false);

        
    }

    //void ImportTransactionData(){
    //    //this seems to work, but need to be sure since printing out doesn't work
    //    TextAsset jsonObj = Resources.LoadAll(recentTransactionDir)[0] as TextAsset;

    //    Transaction tObj = JsonUtility.FromJson<Transaction>(jsonObj.text);

    //    transactionData = tObj.transactions;

    //    numTransactions = transactionData.Count;

    //    Debug.Log("Imported " + numTransactions + " recent transactions.");
    //}


    void CreateTransactionsArrays(){
        TextAsset jsonObj = Resources.LoadAll("profile_dir")[0] as TextAsset;

        ProfileParser currentProf = ProfileParser.parseProfile(jsonObj.text);
        Debug.Log(currentProf.profile.financial_info.venmo_tx);
        Debug.Log(currentProf.profile.financial_info.venmo_tx.Count);
        numTransactions = currentProf.profile.financial_info.venmo_tx.Count;
        transactionData = currentProf.profile.financial_info.venmo_tx;
        Debug.Log("Imported " + numTransactions + " recent transactions.");

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
        }

        for (int i = 0; i < numTransactions; i++){
            recentTransactions.Add(transactionDataPrefab);

            //set the text values for each transaction
            recentTransactions[i].transform.GetChild(0).GetComponent<TextMeshPro>().text = transactionData[i].amount;
            recentTransactions[i].transform.GetChild(1).GetComponent<TextMeshPro>().text = transactionData[i].date;
            recentTransactions[i].transform.GetChild(2).GetComponent<TextMeshPro>().text = transactionData[i].recipient;
            //recentTransactions[i].transform.GetChild(3).GetComponent<TextMeshPro>().text = transactionData[i].payer;
            //add transaction data prefab to scene
            if (i == 0){
                Instantiate(recentTransactions[i], upperLocation.transform);
            } else if (i == numTransactions - 1){
                Instantiate(recentTransactions[i], lowerLocation.transform);
            } else {
                Instantiate(recentTransactions[i], upperLocation.transform);
                Instantiate(recentTransactions[i], lowerLocation.transform);
            }
        }

        //hide all other data blocks except the first one in each location
        for (int j = 1; j < upperLocation.transform.childCount; j++){
            upperLocation.transform.GetChild(j).gameObject.SetActive(false);
        }

        for (int k = 1; k < lowerLocation.transform.childCount; k++){
            lowerLocation.transform.GetChild(k).gameObject.SetActive(false);
        }

        if (numTransactions < 3){
            toggleDownButton(false);
        }
    }

    //display the next transaction and move the bottom one to the top
    public void nextTransaction(){
        upperLocation.transform.GetChild(currentTransaction).gameObject.SetActive(false);
        lowerLocation.transform.GetChild(currentTransaction).gameObject.SetActive(false);

        currentTransaction++;
        toggleUpButton(true);

        if (currentTransaction == numTransactions - 2){
            toggleDownButton(false);
        }

        upperLocation.transform.GetChild(currentTransaction).gameObject.SetActive(true);
        lowerLocation.transform.GetChild(currentTransaction).gameObject.SetActive(true);
    }

    //display the previous transaction and move the top one to the bottom
    public void previousTransaction(){
        upperLocation.transform.GetChild(currentTransaction).gameObject.SetActive(false);
        lowerLocation.transform.GetChild(currentTransaction).gameObject.SetActive(false);

        currentTransaction--;
        toggleDownButton(true);

        if (currentTransaction == 0){
            toggleUpButton(false);
        }

        upperLocation.transform.GetChild(currentTransaction).gameObject.SetActive(true);
        lowerLocation.transform.GetChild(currentTransaction).gameObject.SetActive(true);
    }

    //turn the up button on/off
    void toggleUpButton(bool state){
        upButton.SetActive(state);
    }

    //turn the down button on/off
    void toggleDownButton(bool state){
        downButton.SetActive(state);
    }
}
