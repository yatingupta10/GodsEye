using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LayerController : MonoBehaviour {
    public GameObject[] UILayers;

    private int currLayer = 0;

    // Start is called before the first frame update
    void Start(){
        
    }

    // Update is called once per frame
    void Update(){
        
    }

    //show next layer of information
    public void NextLayer(){
        UILayers[currLayer].SetActive(false);
        currLayer++;
        UILayers[currLayer].SetActive(true);
    }

    //show previous layer of information
    public void PreviousLayer(){
        UILayers[currLayer].SetActive(false);
        currLayer--;
        UILayers[currLayer].SetActive(true);
    }

    //minimize layer so another picture can be taken
    public void Minimize(){

    }
}
