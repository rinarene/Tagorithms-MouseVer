using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class swarmEnd : MonoBehaviour {

    TextOutput rec;

    private void Start()
    {
        rec = GameObject.Find("TextOutput").GetComponent<TextOutput>();
    }

    public void onClick()
    {
        rec.Record();
        SceneManager.LoadScene("Questions");
    }
}
