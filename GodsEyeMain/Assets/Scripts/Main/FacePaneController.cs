using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//move the face pane up after the user clicks it
public class FacePaneController : MonoBehaviour
{
    public GameObject pane;
    public GameObject scoreBubble;
    public GameObject faceButton;
    public GameObject nameText;
    public GameObject scoreText;
    public GameObject buttonCollection;

    private bool moveStarted = false;
    private bool moveDone = false;

    private Vector3 startPos;
    private Vector3 endPos;

    public float animationSpeed = 1.0f;

    private float startTime;
    private float totalDistance;

    // Start is called before the first frame update
    void Start(){
        float zPos = pane.GetComponentInParent<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital>().WorldOffset.z;

        startPos = new Vector3(0.0f, -0.15f, zPos);
        endPos = new Vector3(0.0f, 0.0f, zPos);

        startTime = Time.time;
        totalDistance = Vector3.Distance(startPos, endPos);
    }

    // Update is called once per frame
    void Update(){
        if (moveStarted){
            float distanceCovered = (Time.time - startTime) * animationSpeed;

            float distanceFraction = distanceCovered / totalDistance;

            pane.transform.position = Vector3.Lerp(startPos, endPos, distanceFraction);

            if (pane.transform.position.y == 0.0f){
                moveDone = true;
            }
        }

        if (moveDone){
            moveStarted = false;
            moveDone = false;

            //remove score in text bubble, button over face
            scoreBubble.SetActive(false);
            faceButton.SetActive(false);

            //show name, score and accept/reject buttons
            nameText.SetActive(true);
            scoreText.SetActive(true);
            buttonCollection.SetActive(true);
        }
    }

    //adds text for name and score and shows buttons
    public void UpdatePane(){
        moveStarted = true;
    }
}
