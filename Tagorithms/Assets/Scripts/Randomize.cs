using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Randomize : MonoBehaviour {


    string[] allLevels = { "ControlStart", "FlockStart", "FireflyStart", "SwarmStart" };
    public string currentLevel;
    List<int> completedLevels;
    int rand;

    private void Awake()
    {
        // need to keep what levels have already been played
        DontDestroyOnLoad(this.gameObject);

        // make sure there is only one of these
        if (FindObjectsOfType(GetType()).Length > 1)
        {
            Destroy(this.gameObject);
        }
    }

    void Start () {
        completedLevels = new List<int>();     
	}
	
	public void LevelSelect()
    {
        if (completedLevels.Count < 4)
        {
            rand = Random.Range(0, 4);

            // if completedLevels list contains the number random selected then re-random
            while (completedLevels.Contains(rand))
            {
                rand = Random.Range(0, 4);
            }

            // selects current level in array 
            currentLevel = allLevels[rand];

            // adds level into completedLevels list so it can't be selected again
            completedLevels.Add(rand);
            Debug.Log(completedLevels.Count);
        }

        else
        {
            currentLevel = "End";
        }


    }
}
