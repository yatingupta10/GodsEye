using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FaceRecName : MonoBehaviour
{
    public static FaceRecName instance;

    [HideInInspector]
    public string recName;

    public Text displayText;
    public float delay;


    // Start is called before the first frame update
    void Start(){
        if (instance == null){
            instance = this;
        } else if (instance != this) {
            Destroy(gameObject);
        }

        //Begin();
        recName = "";
    }

    // Update is called once per frame
    void Update(){
        //only for testing in unity editor
        if (Input.GetKeyDown(KeyCode.X))
        {
            displayText.text = "Found Face:\nTESTING 1";
            Begin();
            recName = "Gagan Vasudev";
        }

        if (Input.GetKeyDown(KeyCode.C)){
            displayText.text = "Found Face:\nTESTING 2";
            Begin();
            recName = "Victor Zamarian";
        }
    }

    public void Begin(){
        Invoke("DelayedBegin", delay);
    }

    void DelayedBegin(){
        displayText.text = "";
        MainDataController.instance.InsertData();
    }

    public void RemoveName(){
        recName = "";
    }
}
