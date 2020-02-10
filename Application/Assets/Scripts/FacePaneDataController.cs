using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class FacePaneDataController : MonoBehaviour
{
    string faceImgDir = "face_images/";

    Sprite ImportImage(string imagePath){
        Texture2D image = Resources.Load(imagePath) as Texture2D;
        return Sprite.Create(image, new Rect(0, 0, image.width, image.height), Vector2.zero);
    }

    private Color32 ReturnColor32(int score)
    {
        if (score <= 10 && score > 0) 
            return new Color32(255, 0, 0, 255);
        else if (score > 20 && score <= 30)
            return new Color32(255, 64, 0, 255);
        else if(score > 30 && score <= 40)
            return new Color32(255, 128, 0, 255);
        else if (score > 40 && score <= 50)
            return new Color32(255, 191, 0, 255);
        else if (score > 50 && score <= 60)
            return new Color32(255, 255, 0, 255);
        else if (score > 60 && score <= 70)
            return new Color32(191, 255, 0, 255);
        else if (score > 70 && score <= 80)
            return new Color32(128, 255, 0, 255);
        else if (score > 80 && score <= 90)
            return new Color32(64, 255, 0, 255);
        else
            return new Color32(0, 255, 0, 255);
    }

    private string GetVulnerabilityText(int score)
    {
        if (score < 26 && score > 0){
            return "Fortified";
        } else if (score >= 26 && score < 51){
            return "Low Vulnerability";
        } else if (score >= 51 && score < 76){
            return "Medium Vulnerability";
        } else {
            return "Highly Vulnerable";
        }
    }

    public void Begin()
    {
        string faceImg = MainDataController.instance.currentProf.profile.face_image;
        Sprite face = ImportImage(faceImgDir + faceImg);

        int score = MainDataController.instance.currentProf.score;
        string firstName = MainDataController.instance.currentProf.profile.first_name;
        string lastName = MainDataController.instance.currentProf.profile.last_name;

        GameObject[] allObjects = Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[];

        foreach (GameObject obj in allObjects){
            if (obj.tag == "FacePane"){
                obj.GetComponentInChildren<Image>().sprite = face;
                obj.GetComponentInChildren<Image>().preserveAspect = true;
            }

            if (obj.tag == "FacePaneScore"){
                obj.GetComponent<TextMeshPro>().text = score.ToString();
                obj.GetComponent<TextMeshPro>().color = ReturnColor32(score);
            }

            if (obj.tag == "FacePaneIndex")
            {
                obj.GetComponent<TextMeshPro>().text = GetVulnerabilityText(score);
            }

            if (obj.tag == "FullNameTag"){
                obj.GetComponent<TextMeshPro>().text = firstName + " " + lastName;
            }

            if (obj.tag == "ScoreDisplayBackground")
            {
                obj.GetComponent<SpriteRenderer>().color = ReturnColor32(score);
            }
        }
    }
}
