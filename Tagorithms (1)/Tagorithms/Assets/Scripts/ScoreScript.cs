using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class ScoreScript : MonoBehaviour {

    //public GUIText scoreText;
    public int score, health;

    [SerializeField]
    private int max_health;

    [SerializeField]
    private healthBarScript healthBar;

    // Use this for initialization
    void Start () {
		score = 0;
        health = max_health;
        gameObject.GetComponent<Text>().text = "Hits: " + score;
    }
	
	// Update is called once per frame
	void Update () {
	
	}


	public void UpdateScore ()
	{
		score = score + 1;
        health = max_health - score;

		gameObject.GetComponent<Text>().text = "Hits: " + score;

        healthBar.setHealthBarValue(health, max_health);

    }
}
