using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FacePaneController : MonoBehaviour
{
    public GameObject pane;
    public GameObject scoreBubble;
    public GameObject faceButton;
    public GameObject nameText;
    public GameObject scoreText;
    public GameObject buttonCollection;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    //adds text for name and score and shows buttons
    public void UpdatePane(){
        //make this occur over time
        pane.transform.position = new Vector3(pane.transform.position.x, 0.0f, pane.transform.position.z);

        //remove score in text bubble, button over face
        scoreBubble.SetActive(false);
        faceButton.SetActive(false);

        //show name, score and accept/reject buttons
        nameText.SetActive(true);
        scoreText.SetActive(true);
        buttonCollection.SetActive(true);
    }
}
