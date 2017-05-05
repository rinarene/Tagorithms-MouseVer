using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ScoreScript : MonoBehaviour {

    //public GUIText scoreText;
    public int score, health;

	// Use this for initialization
	void Start () {
		score = 0;
        health = 100000;
        gameObject.GetComponent<Text>().text = "Hits: " + score;
	}
	
	// Update is called once per frame
	void Update () {
	
	}


	public void UpdateScore ()
	{
		score = score + 1;
        health = health - score;
        if(health < 0)
        {

        }
		gameObject.GetComponent<Text>().text = "Hits: " + score;

	}
}
