using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class playButton : MonoBehaviour {

    Randomize r;
    private void Start()
    {
        r = GameObject.Find("Randomizer").GetComponent<Randomize>();
    }
    public void onClick()
    {
        r.LevelSelect();
        SceneManager.LoadScene(r.currentLevel);
    }
}
