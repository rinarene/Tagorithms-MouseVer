using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class healthBarScript : MonoBehaviour {

    private float fillAmount;

    private float criticalHealth = 0.2f;

    [SerializeField]
    private Image content_image;

    // Use this for initialization
    void Start () {
        fillAmount = 1.0f;
	}
	
	// Update is called once per frame
	void Update ()
    { 
        HandleBar();
	}

    private void HandleBar()
    {
        content_image.fillAmount = fillAmount;
        if(fillAmount < criticalHealth)
        {
            content_image.color = Color.red;
        }
    }

    public void setHealthBarValue(int value, int max_value)
    {
        if(max_value > 0)
        {
            fillAmount = (float)value / (float)max_value;
        }
    }
}
