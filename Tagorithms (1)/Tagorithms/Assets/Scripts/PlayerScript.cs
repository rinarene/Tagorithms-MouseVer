using UnityEngine;
using System.Collections;

public class PlayerScript : MonoBehaviour {

	private Vector3 mousePos;
	private ScoreScript scoreScript;
	private mainData data;
	public int type;

	private int touching = 1;
	private float touchId = 1.1f;

	void Start () {
		GameObject scoreObject = GameObject.FindWithTag ("Score");
		if (scoreObject != null)
		{
			scoreScript = scoreObject.GetComponent <ScoreScript>();
		}
		if (scoreScript == null)
		{
			Debug.Log ("Cannot find 'ScoreScript' script");
		}

		GameObject dataObject = GameObject.FindWithTag ("Main");
		if (dataObject != null)
		{
			data = dataObject.GetComponent <mainData>();
		}
		if (data == null)
		{
			Debug.Log ("Cannot find 'mainData' script");
		}

		//disable to lessen lag
		QualitySettings.vSyncCount = 0;
	}

    void Update()
    {
        mousePos = Input.mousePosition;
        
        Vector3 pos = Camera.main.ScreenToWorldPoint(mousePos);
        pos.z = transform.position.z;
        //transform.position = pos;

        transform.position = Vector3.MoveTowards(transform.position, pos, 1.0f);

        //clamp it within visible screen
        float size = 15f;
        Vector3 viewPos = Camera.main.WorldToScreenPoint(this.transform.position);
        if (viewPos.x > Screen.width)
        {
            viewPos.x = Screen.width - size;
        }
        if (viewPos.x < 0)
        {
            viewPos.x = size;
        }
        if (viewPos.y > Screen.height)
        {
            viewPos.y = Screen.height - size;
        }
        if (viewPos.y < 0)
        {
            viewPos.y = size;
        }
        this.transform.position = Camera.main.ScreenToWorldPoint(viewPos);
    }

	void OnTriggerEnter2D(Collider2D coll) {
		//reset the boid to a random location
		Vector3 pos = Camera.main.ScreenToWorldPoint (new Vector3 (Random.Range (0.0F, Screen.width), Random.Range (0.0F, Screen.height), 0));
		pos.z = 0f;
		coll.transform.position = pos;
		coll.GetComponent<Rigidbody2D> ().velocity = new Vector3 (Random.Range (-1.0F, 1.0F), Random.Range (-1.0F, 1.0F), Random.Range (0.0F, 1.0F));

		scoreScript.UpdateScore ();

        switch (type)
        {
            case 0:
                data.UpdateControl(scoreScript.score);
                break;
            case 1:
                data.UpdateFlock(scoreScript.score);
                break;
            case 2:
                data.UpdateSwarm(scoreScript.score);
                break;
            case 3:
                data.UpdateFirefly(scoreScript.score);
                break;
        }
    }
}
