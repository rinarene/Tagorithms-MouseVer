using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuToSettings : MonoBehaviour {

    public string MenuOrSettings;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	public void OnClick () {       
        {
            SceneManager.LoadScene(MenuOrSettings);

        }

    }
}
