using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationScript : MonoBehaviour {

    public Sprite[] frames;
    public int fps;

    private int fps_count = 0;
    private int index = 0;

    // Use this for initialization
    void Start () {

    }
	
	// Update is called once per frame
	void Update () {

        fps_count++;
        if (fps_count < fps)
            return;
        fps_count = 0;

        index++;
        if (index >= frames.Length)
            index = 0;

        this.GetComponentInParent<SpriteRenderer>().sprite = frames[index];

    }
}
