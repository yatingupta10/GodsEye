using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIController : MonoBehaviour {
    public GameObject layers;
    public GameObject mainUI;
    public GameObject startButton;

    // Start is called before the first frame update
    void Start(){
        
    }

    // Update is called once per frame
    void Update(){
        
    }

    //show what happens after a picture is taken
    public void ShowData(){
        Instantiate(layers, mainUI.transform);
        startButton.SetActive(false);
    }
}
