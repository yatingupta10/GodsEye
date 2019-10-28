using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Microsoft.MixedReality.Toolkit.Input
{
    public class WorldCursor : MonoBehaviour
    {
        // Start is called before the first frame update
        void Start()
        {

        }

        void Update()
        {
           /* // Do a raycast into the world based on the user's
            // head position and orientation.
            var headPosition = Camera.main.transform.position;
            var gazeDirection = Camera.main.transform.forward;

            RaycastHit hitInfo;

            if (Physics.Raycast(headPosition, gazeDirection, out hitInfo))
            {
                // If the raycast hit a hologram...
                // Display the cursor mesh.
                //meshRenderer.enabled = true;

                // Move the cursor to the point where the raycast hit.
                this.transform.position = hitInfo.point;

                // Rotate the cursor to hug the surface of the hologram.
                //this.transform.rotation = Quaternion.FromToRotation(Vector3.up, hitInfo.normal);
            }
            else
            {
                // If the raycast did not hit a hologram, hide the cursor mesh.
                //meshRenderer.enabled = false;
            }*/
        }
    }
}