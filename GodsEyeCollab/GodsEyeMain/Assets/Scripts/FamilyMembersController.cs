using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using static ProfileParser;

//show up to 3 family members in the connections view
public class FamilyMembersController : MonoBehaviour
{
    Vector3 member1Pos = new Vector3(0.0f, 0.2f, 0.0f);
    Vector3 member2Pos = new Vector3(0.0f, 0.0f, 0.0f);
    Vector3 member3Pos = new Vector3(0.0f, -0.2f, 0.0f);

    public GameObject familyMemberPrefab;
    public GameObject familyMemberLocation;
    List<GameObject> familyMembersPrefabs = new List<GameObject>();

    string familyImagesDir = "gagan_family";


    // Start is called before the first frame update
    void Start(){
        CreateMemberArrays();
    }

    Sprite ImportImage(string imagePath){
        Texture2D image = Resources.Load<Texture2D>(imagePath);
        return Sprite.Create(image, new Rect(0, 0, image.width, image.height), Vector2.zero);
    }

    void CreateMemberArrays(){
        TextAsset jsonObj = Resources.LoadAll("profile_dir")[0] as TextAsset;
        ProfileParser currentProf = ProfileParser.parseProfile(jsonObj.text);
        List<FamilyMember> familyMembers = currentProf.profile.connections.family_members;


        for (int i = 0; i < 3; i++)
        {
            familyMembersPrefabs.Add(familyMemberPrefab);

            Sprite familyImage = ImportImage(familyImagesDir + "/" + familyMembers[i].url);
            familyMembersPrefabs[i].GetComponentInChildren<Image>().sprite = familyImage;
            familyMembersPrefabs[i].GetComponentInChildren<Image>().preserveAspect = true;

            familyMembersPrefabs[i].transform.GetChild(1).GetComponent<TextMeshPro>().text = familyMembers[i].name;
            familyMembersPrefabs[i].transform.GetChild(2).GetComponent<TextMeshPro>().text = familyMembers[i].relation;

            if (i == 0)
            {
                familyMembersPrefabs[i].transform.position = member1Pos;

            }
            else if (i == 1)
            {
                familyMembersPrefabs[i].transform.position = member2Pos;
            }
            else if (i == 2)
            {
                familyMembersPrefabs[i].transform.position = member3Pos;
            }

            Instantiate(familyMembersPrefabs[i], familyMemberLocation.transform);
        }
    }
}
