using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class GameSettings : MonoBehaviour {

    public string fileLoc;
    public float rSpawn, bSpawn, gSpawn, ySpawn;
    public int rRand, bRand, gRand, yRand;

    // Use this for initialization
    private void Awake()
    {
        
        if (FindObjectsOfType(GetType()).Length > 1)
        {
            Destroy(this.gameObject);
        }

        DontDestroyOnLoad(this.gameObject);
    }
    void Start () {
        rSpawn = 7f;
        bSpawn = gSpawn = ySpawn = 5f;
        rRand = bRand = gRand = yRand = 5;
	}
	
	// Update is called once per frame
	public void OnClick ()
    {
        
        Destroy(GameObject.Find("Settings"));

        fileLoc = GameObject.Find("FileLoc").GetComponent<InputField>().text;       
        Debug.Log(fileLoc);

        rRand = Convert.ToInt32(GameObject.Find("rRand").GetComponent<InputField>().text);
        Debug.Log(rRand);

        rSpawn = Convert.ToSingle(GameObject.Find("rSpawn").GetComponent<InputField>().text);
        Debug.Log(rSpawn);

        bRand = Convert.ToInt32(GameObject.Find("bRand").GetComponent<InputField>().text);
        bSpawn = Convert.ToSingle(GameObject.Find("bSpawn").GetComponent<InputField>().text);

        gRand = Convert.ToInt32(GameObject.Find("gRand").GetComponent<InputField>().text);
        gSpawn = Convert.ToSingle(GameObject.Find("gSpawn").GetComponent<InputField>().text);

        yRand = Convert.ToInt32(GameObject.Find("yRand").GetComponent<InputField>().text);
        ySpawn = Convert.ToSingle(GameObject.Find("ySpawn").GetComponent<InputField>().text);

        

    }
}
