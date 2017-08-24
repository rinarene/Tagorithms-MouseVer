using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;

public class ShowMTurkNumber : MonoBehaviour {

	// Use this for initialization
	void Start () {
		gameObject.GetComponent<Text>().text =	GerateMTurkNumber.getMTurkNumber ().ToString();

		Debug.Log (GerateMTurkNumber.getMTurkNumber ().ToString ());
	}
	
	// Update is called once per frame
	void Update () {
		GetComponent<Text> ().text = "";
		Debug.Log (GetComponent<Text> ().text);
	}
};
