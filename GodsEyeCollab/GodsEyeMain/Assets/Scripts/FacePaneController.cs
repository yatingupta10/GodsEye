using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FacePaneController : MonoBehaviour
{
    public GameObject faceButton;
    public GameObject nameText;
    public GameObject screen;

    public float upForceScale;
    public float leftForceScale;

    public Transform topPosition;
    public Transform leftPosition;
    

    Rigidbody rb;
    Vector3 upForce;
    Vector3 leftForce;

    bool moveStart = false;
    bool nextMove = false;

    // Start is called before the first frame update
    void Start(){
        rb = gameObject.GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update(){
        if (moveStart){
            moveStart = false;
            upForce = upForceScale * Vector3.Normalize(topPosition.position - gameObject.transform.position);
            rb.AddForce(upForce);
        }
        
        if (nextMove){
            nextMove = false;
            leftForce = leftForceScale * Vector3.Normalize(leftPosition.position - topPosition.position);
            rb.AddForce(leftForce);
        }

    }

    public void BeginMove(){
        //rb.constraints = RigidbodyConstraints.FreezeRotation;

        //moveStart = true;
        nextMove = true;
        //scoreBubble.SetActive(false);
        faceButton.SetActive(false);
    }

    void OnTriggerEnter(Collider col){
        //collided with top collider, now move left
        /*if (col.gameObject.name == "TopCollider"){
            rb.constraints |= RigidbodyConstraints.FreezePositionY;
            nextMove = true;
        }*/

        //collided with left collider, now stop moving
        if (col.gameObject.name == "LeftCollider"){
            rb.constraints |= RigidbodyConstraints.FreezeAll;
            nameText.SetActive(true);
            //scoreText.SetActive(true);
            //buttonCollection.SetActive(true);
            screen.SetActive(true);
            Destroy(rb);
        }
    }
}
