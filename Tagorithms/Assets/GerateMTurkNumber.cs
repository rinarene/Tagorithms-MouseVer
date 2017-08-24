using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GerateMTurkNumber : MonoBehaviour {

	public static System.Random rng = new System.Random ();
	private static long MTurkGerationNumber = System.Convert.ToInt64 (rng.NextDouble () * 1000000) * 17;


	public static long getMTurkNumber()
	{
		return MTurkGerationNumber;
	}

    public static string getFileName()
    {
        return getMTurkNumber().ToString() + ".csv";
    }

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
