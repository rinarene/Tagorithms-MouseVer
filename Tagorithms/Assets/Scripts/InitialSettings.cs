using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitialSettings : MonoBehaviour {

    public string fileLoc;
    public float rRand, rSpawn, bRand, bSpawn, gRand, gSpawn, yRand, ySpawn;

    // Use this for initialization
    void Start () {
        rSpawn = 7f;
        bSpawn = gSpawn = ySpawn = 5f;
        rRand = bRand = gRand = yRand = 5f;
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
