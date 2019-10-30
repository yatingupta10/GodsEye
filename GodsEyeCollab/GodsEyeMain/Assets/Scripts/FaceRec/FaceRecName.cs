using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceRecName : MonoBehaviour
{
    public static FaceRecName instance;

    public string recName;


    public GameObject mainUI;
    public GameObject cameraRectangle;



    // Start is called before the first frame update
    void Start()
    {
        if (instance == null){
            instance = this;
        } else if (instance != this) {
            Destroy(gameObject);
        }

        //Begin();
    }

    // Update is called once per frame
    void Update()
    {
        //only for testing in unity editor
        if (Input.GetKeyDown(KeyCode.X))
        {
            Begin();
        }
    }

    public void Begin()
    {
        Invoke("DelayedBegin", 2.0f);
    }

    void DelayedBegin()
    {
        mainUI.SetActive(true);
        cameraRectangle.SetActive(false);
    }
}
