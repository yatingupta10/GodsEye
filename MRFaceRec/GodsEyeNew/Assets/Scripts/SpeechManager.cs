using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Windows.Speech;
using TMPro;

public class SpeechManager : MonoBehaviour
{
    KeywordRecognizer recognizer = null;
    Dictionary<string, System.Action> keywords = new Dictionary<string, System.Action>();


    public GameObject testText;


    // Start is called before the first frame update
    void Start(){
        keywords.Add("Change Text", () =>
        {
            testText.GetComponent<TextMeshPro>().color = new Color32(255, 0, 0, 255);
            testText.GetComponent<TextMeshPro>().text = "Voice command worked";
        });

        recognizer = new KeywordRecognizer(keywords.Keys.ToArray());
        recognizer.OnPhraseRecognized += RecognizePhrase;
        recognizer.Start();
    }

    private void RecognizePhrase(PhraseRecognizedEventArgs args){
        System.Action keywordAction;

        testText.GetComponent<TextMeshPro>().text = args.text;

        if (keywords.TryGetValue(args.text, out keywordAction)){
            keywordAction.Invoke();
        }
    }
}
