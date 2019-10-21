using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Microsoft.MixedReality.Toolkit.UI;

//controller for showing the recent social media images in the personal view
public class RecentImagesController : MonoBehaviour
{
    public GameObject ImageBaseLocation; //location where image prefabs will be instantiated
    public GameObject BaseImagePrefab;

    int numImages = 0;

    List<Sprite> RecentImages = new List<Sprite>();
    List<GameObject> RecentImagesPrefabs = new List<GameObject>(); //image prefabs will be instantiated for each image

    int currentImage = 0;

    public GameObject backButton; //previous button
    public GameObject forwardButton; //next button

    //recent social media images will be stored in this directory when pulling in user data
    public string recentImageDir = "Testing/RecentImages";


    // Start is called before the first frame update
    void Start(){
        CreateImageArrays();

        toggleBackButton(false);
    }

    void ImportImages(){
        Object[] images = Resources.LoadAll(recentImageDir, typeof(Texture2D));

        //for all images in the directory, create a sprite for them
        foreach (Object obj in images){
            Texture2D tex = (Texture2D) obj;
            RecentImages.Add(Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), Vector2.zero));
        }

        numImages = RecentImages.Count;

        Debug.Log("Imported " + numImages + " images as sprites.");
    }

    void CreateImageArrays(){
        ImportImages();

        for (int i = 0; i < numImages; i++){
            RecentImagesPrefabs.Add(BaseImagePrefab);

            //set the sprite
            RecentImagesPrefabs[i].GetComponentInChildren<Image>().sprite = RecentImages[i];
            RecentImagesPrefabs[i].GetComponentInChildren<Image>().preserveAspect = true;

            //add the image prefab to the scene inside the recent images data element
            Instantiate((GameObject)RecentImagesPrefabs[i], ImageBaseLocation.transform);

            if (i != 0){ //hide all other images except the first one
                ImageBaseLocation.transform.GetChild(i).gameObject.SetActive(false);
            }
        }
    }

    //display the next image in the sequence
    public void NextImage(){
        ImageBaseLocation.transform.GetChild(currentImage).gameObject.SetActive(false);

        currentImage++;
        toggleBackButton(true);

        if (currentImage == numImages - 1){
            toggleForwardButton(false);
        }

        ImageBaseLocation.transform.GetChild(currentImage).gameObject.SetActive(true);
    }

    //display the previous image in the sequence
    public void PreviousImage(){
        ImageBaseLocation.transform.GetChild(currentImage).gameObject.SetActive(false);

        currentImage--;
        toggleForwardButton(true);

        if (currentImage == 0){
            toggleBackButton(false);
        }

        ImageBaseLocation.transform.GetChild(currentImage).gameObject.SetActive(true);
    }

    //turn the back button on/off
    void toggleBackButton(bool state){
        /*backButton.GetComponent<Interactable>().Enabled = state;
        backButton.transform.GetChild(0).GetChild(0).GetComponent<MeshRenderer>().enabled = state;
        backButton.transform.GetChild(0).GetChild(0).GetChild(0).GetComponent<MeshRenderer>().enabled = state;*/

        backButton.SetActive(state);
    }

    //turn the forward button on/off
    void toggleForwardButton(bool state){
        /*forwardButton.GetComponent<Interactable>().Enabled = state;
        forwardButton.transform.GetChild(0).GetChild(0).GetComponent<MeshRenderer>().enabled = state;
        forwardButton.transform.GetChild(0).GetChild(0).GetChild(0).GetComponent<MeshRenderer>().enabled = state;*/

        forwardButton.SetActive(state);
    }
}
