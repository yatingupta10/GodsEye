using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

//show up to 3 family members in the connections view
public class FamilyMembersController : MonoBehaviour
{
    public GameObject baseMemberPrefab;

    int currentMember = 0;

    Vector3 member1Pos = new Vector3(0.0f, 0.24f, 0.0f);
    Vector3 member2Pos = new Vector3(0.0f, 0.0f, 0.0f);
    Vector3 member3Pos = new Vector3(0.0f, -0.24f, 0.0f);

    List<GameObject> memberPrefabs = new List<GameObject>();

    public string familyMemberImagesDir = "Testing/FamilyMembers";


    // Start is called before the first frame update
    void Start(){
        //CreateMemberArrays();
    }

    Sprite ImportImage(string imagePath){
        Texture2D image = Resources.Load<Texture2D>(imagePath);
        return Sprite.Create(image, new Rect(0, 0, image.width, image.height), Vector2.zero);
    }

    void CreateMemberArrays(){
        //go through family member list and create a base prefab for each family member (up to 3)
        //set the name and relation text in the prefabs with the text from the family member object
        //import the image that is specified in the family member object and add that to the prefab
        //increment numMember after each prefab is finished (its highest value is 3)

        Vector3 spawnPos = Vector3.zero;

        switch (currentMember){
            case 0:
                spawnPos = member1Pos;
                break;
            case 1:
                spawnPos = member2Pos;
                break;
            case 2:
                spawnPos = member3Pos;
                break;
        }


        //example for element 0 of the family member list:
        memberPrefabs.Add(baseMemberPrefab);
        memberPrefabs[0].transform.GetChild(1).GetComponent<TextMeshPro>().text = "family member name";
        memberPrefabs[0].transform.GetChild(2).GetComponent<TextMeshPro>().text = "family member relation";

        string familyMemberImageName = "test.jpg";
        Sprite memberImage = ImportImage(familyMemberImagesDir + "/" + familyMemberImageName);

        memberPrefabs[0].GetComponentInChildren<Image>().sprite = memberImage;
        memberPrefabs[0].GetComponentInChildren<Image>().preserveAspect = true;

        Instantiate(memberPrefabs[0], spawnPos, Quaternion.identity);
        currentMember++;
    }
}
