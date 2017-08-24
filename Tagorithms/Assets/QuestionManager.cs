using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;



public class QuestionManager : MonoBehaviour {

	struct Question{
		public Question(uint number_, string text_)
		{
			number = number_;
			text = text_;
			rating = -1;
		}

		public uint number;
		public string text;
		public int rating;
	};

	private int activeQuestion = 0;

	private GameObject[] radioButtons;

	private Text questionText;

	private List<Question> allquestions = new List<Question>();

	private Question[] questions;

	private GameObject confirmButton;

	private mainData data;

	// Use this for initialization
	void Start () {

		GameObject dataObject = GameObject.FindWithTag("Main");
		if (dataObject != null)
			data = dataObject.GetComponent<mainData>();
		if (data == null)
			Debug.Log("Cannot find 'mainData' script");

		radioButtons = GameObject.FindGameObjectsWithTag ("RadioButton");

		questionText = GameObject.FindGameObjectWithTag ("Question").GetComponent<Text>();

		confirmButton = GameObject.FindGameObjectWithTag ("ConfirmButton");

		allquestions.Add (new Question (1, "The level was fun"));
		allquestions.Add (new Question (2, "The level was difficult"));
		allquestions.Add (new Question (3, "The level was easy"));
		allquestions.Add (new Question (4, "The enemies acted \"tricky\" or \"strategic\"."));
		allquestions.Add (new Question (5, "The enemies were predictable"));

		Shuffle (allquestions);


		// Todo shuffle
		questions = (Question[])allquestions.ToArray ();

		questionText.text = questions[activeQuestion].text;

		UncheckAll ();

		disableConfirmButton ();
	}
		
	void Shuffle(List<Question> list)
	{
		int n = list.Count;

		System.Random rng = new System.Random ();
		while (n > 1) {
			n--;
			Debug.Log (n);
			int k = Random.Range(0, n);
			Debug.Log (k);
			Question value = list [k];
			list [k] = list [n];
			list [n] = value;
		}
	}
		
	void disableConfirmButton()
	{
		confirmButton.SetActive (false);
	}

	void EnableConfirmButton()
	{
		confirmButton.SetActive (true);
	}

	// Update is called once per frame
	void Update () {
		
	}

	void UncheckAll()
	{
		foreach(GameObject r in radioButtons)
		{
			r.GetComponentInChildren<Image> ().gameObject.SetActive (false);
		}
	}

	public void Confirm()
	{
		UncheckAll ();
		activeQuestion++;
		disableConfirmButton ();
		if (activeQuestion < questions.Length) 
		{
			questionText.text = questions[activeQuestion].text;
		}

	}

	public void ClickButton1()
	{
		UncheckAll ();
		questions[activeQuestion].rating = 1;
		EnableConfirmButton ();
	}

	public void ClickButton2()
	{
		UncheckAll ();
		questions[activeQuestion].rating = 2;
		EnableConfirmButton ();
	}

	public void ClickButton3()
	{
		UncheckAll ();
		questions[activeQuestion].rating = 3;
		EnableConfirmButton ();
	}

	public void ClickButton4()
	{
		UncheckAll ();
		questions[activeQuestion].rating = 4;
		EnableConfirmButton ();
	}

	public void ClickButton5()
	{
		UncheckAll ();
		questions [activeQuestion].rating = 5;
		EnableConfirmButton ();
	}

	public void ClickButton6()
	{
		UncheckAll ();
		questions[activeQuestion].rating = 6;
		EnableConfirmButton ();
	}

	public void ClickButton7()
	{
		UncheckAll ();
		questions[activeQuestion].rating = 7;
		EnableConfirmButton ();
	}
}
