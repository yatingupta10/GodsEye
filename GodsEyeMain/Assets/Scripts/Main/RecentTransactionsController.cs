using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class RecentTransactionsController : MonoBehaviour
{
    public GameObject transactionDataPrefab;

    public GameObject upperLocation; //location of top data block
    public GameObject lowerLocation; //location of bottom data block

    public GameObject upButton; //previous button
    public GameObject downButton; //next button

    int numTransactions;
    int currentTransaction = 0;

    List<TransactionData> transactionData;
    List<GameObject> recentTransactions = new List<GameObject>();

    //recent transaction data can be stored in this directory when pulling in user data
    [HideInInspector]
    public string recentTransactionDir = "Testing/RecentTransactions";


    // Start is called before the first frame update
    void Start(){
        CreateTransactionsArrays();

        toggleUpButton(false);
    }

    void ImportTransactionData(){
        //this seems to work, but need to be sure since printing out doesn't work
        TextAsset jsonObj = Resources.LoadAll(recentTransactionDir)[0] as TextAsset;

        Transaction tObj = JsonUtility.FromJson<Transaction>(jsonObj.text);

        transactionData = tObj.transactions;

        numTransactions = transactionData.Count;

        Debug.Log("Imported " + numTransactions + " recent transactions.");
    }


    void CreateTransactionsArrays(){
        ImportTransactionData();

        for (int i = 0; i < numTransactions; i++){
            recentTransactions.Add(transactionDataPrefab);

            //set the text values for each transaction
            recentTransactions[i].transform.GetChild(0).GetComponent<TextMeshPro>().text = transactionData[i].date;
            recentTransactions[i].transform.GetChild(1).GetComponent<TextMeshPro>().text = transactionData[i].amount;
            recentTransactions[i].transform.GetChild(2).GetComponent<TextMeshPro>().text = transactionData[i].recipient;

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
