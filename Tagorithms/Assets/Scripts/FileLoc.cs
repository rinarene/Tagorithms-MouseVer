using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class Settings : MonoBehaviour {

    public string fileLoc;
    public float rRand, rSpawn, bRand, bSpawn, gRand, gSpawn, yRand, ySpawn;

    // Use this for initialization
    private void Awake()
    {
        DontDestroyOnLoad(this.gameObject);
        
    }
    void Start () {
        rSpawn = 7f;
        bSpawn = gSpawn = ySpawn = 5f;
        rRand = bRand = gRand = yRand = 5f;
	}
	
	// Update is called once per frame
	void Update () {
        if (Input.GetMouseButtonDown(0))
        {
            fileLoc = GameObject.Find("FileLoc").GetComponent<InputField>().text;
            Debug.Log(fileLoc);

            rRand = Convert.ToSingle(GameObject.Find("rRand").GetComponent<InputField>().text);
            Debug.Log(rRand);

            rSpawn = Convert.ToSingle(GameObject.Find("rSpawn").GetComponent<InputField>().text);
            Debug.Log(rSpawn);

            bRand = Convert.ToSingle(GameObject.Find("bRand").GetComponent<InputField>().text);
            bSpawn = Convert.ToSingle(GameObject.Find("bSpawn").GetComponent<InputField>().text);

            gRand = Convert.ToSingle(GameObject.Find("gRand").GetComponent<InputField>().text);
            gSpawn = Convert.ToSingle(GameObject.Find("gSpawn").GetComponent<InputField>().text);

            yRand = Convert.ToSingle(GameObject.Find("yRand").GetComponent<InputField>().text);
            ySpawn = Convert.ToSingle(GameObject.Find("ySpawn").GetComponent<InputField>().text);

        }

    }
}
