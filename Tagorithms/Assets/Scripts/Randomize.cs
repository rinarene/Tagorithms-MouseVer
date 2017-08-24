using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Randomize : MonoBehaviour {


    string[] algoType = { "FlockStart", "SwarmStart" };
    public string currentLevel;
    List<int> completedLevels;
    int curLevel;
    public int rand, rand2, rand3, maxBoid;
    public float allignW, cohW, sepW, dirW, fwdW, vecPStr, vecGStr, boidRad;

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
        if (completedLevels.Count <= 15)
        {
            rand = Random.Range(0, 16);

            // while completedLevels list contains the number random selected then re-random
            while (completedLevels.Contains(rand))
            {
                rand = Random.Range(0, 16);
            }

            if (rand % 2 == 0 && !completedLevels.Contains(rand))
            {
                currentLevel = algoType[0];
                Settings(rand);
                completedLevels.Add(rand);
            }
            else if (!completedLevels.Contains(rand))
            {
                currentLevel = algoType[1];
                Settings(rand);
                completedLevels.Add(rand);
            }

            // adds level into completedLevels list so it can't be selected again
            Debug.Log(rand);
        }

        else
        {
            currentLevel = "EndMTurkNumber";
        }
    }

    public void Settings(int curLevel)
    {
        switch (curLevel)
        {
            //all the even cases are for flocking, odd are swarming
            //FLOCKING SETTINGS
            case 0:
                allignW = 0.6f;
                cohW = 0.2f;
                sepW = 0.4f;
                dirW = 0.5f;
                maxBoid = 20;
                break;

            case 2:
                allignW = 0.6f;
                cohW = 0.2f;
                sepW = 0.4f;
                dirW = 0.5f;
                maxBoid = 20;
                break;
        
            case 4:
                allignW = 0.6f;
                cohW = 0.2f;
                sepW = 0.4f;
                dirW = 0.5f;
                maxBoid = 20;
                break;

            case 6:
                allignW = 0.6f;
                cohW = 0.2f;
                sepW = 0.4f;
                dirW = 0.5f;
                maxBoid = 20;
                break;

            case 8:
                allignW = 0.6f;
                cohW = 0.2f;
                sepW = 0.4f;
                dirW = 0.5f;
                maxBoid = 20;
                break;

            case 10:
                allignW = 0.6f;
                cohW = 0.2f;
                sepW = 0.4f;
                dirW = 0.5f;
                maxBoid = 20;
                break;

            case 12:
                allignW = 0.6f;
                cohW = 0.2f;
                sepW = 0.4f;
                dirW = 0.5f;
                maxBoid = 20;
                break;

            case 14:
                allignW = 0.6f;
                cohW = 0.2f;
                sepW = 0.4f;
                dirW = 0.5f;
                maxBoid = 20;
                break;
            
            //SWARMING SETTINGS
            case 1:
                fwdW = 0.5f;
                vecPStr = 2;
                vecGStr = 2;
                boidRad = 21;
                maxBoid = 20;
                break;
            case 3:
                fwdW = 0.5f;
                vecPStr = 2;
                vecGStr = 2;
                boidRad = 21;
                maxBoid = 20;
                break;
            case 5:
                fwdW = 0.5f;
                vecPStr = 2;
                vecGStr = 2;
                boidRad = 21;
                maxBoid = 20;
                break;
            case 7:
                fwdW = 0.5f;
                vecPStr = 2;
                vecGStr = 2;
                boidRad = 21;
                maxBoid = 20;
                break;
            case 9:
                fwdW = 0.5f;
                vecPStr = 2;
                vecGStr = 2;
                boidRad = 21;
                maxBoid = 20;
                break;
            case 11:
                fwdW = 0.5f;
                vecPStr = 2;
                vecGStr = 2;
                boidRad = 21;
                maxBoid = 20;
                break;
            case 13:
                fwdW = 0.5f;
                vecPStr = 2;
                vecGStr = 2;
                boidRad = 21;
                maxBoid = 20;
                break;
            case 15:
                fwdW = 0.5f;
                vecPStr = 2;
                vecGStr = 2;
                boidRad = 21;
                maxBoid = 20;
                break;
        }
    }
}
