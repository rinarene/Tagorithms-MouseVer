using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

using UnityEngine.UI;
using System.IO;

using System.Net;
using System.Text;



public class QuestionManager : MonoBehaviour {

    playButton play;

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

		public override string ToString()
		{
			return number + "," + text + "," + rating;
		}
	};

	private int activeQuestion = 0;

	private GameObject[] radioButtons;

	private Text questionText;

	private List<Question> allquestions = new List<Question>();

	private Question[] questions;

	private GameObject confirmButton;

	private mainData data;

	private string filename = "question.csv";

	// Use this for initialization
	void Start () {

        play = GameObject.Find("Play").GetComponent<playButton>();

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
		allquestions.Add (new Question (4, "The enemies acted \"tricky\" or \"strategic\""));
		allquestions.Add (new Question (5, "The enemies were predictable"));

		Shuffle (allquestions);

		// Todo shuffle
		questions = (Question[])allquestions.ToArray ();

		questionText.text = questions[activeQuestion].text;

		UncheckAll ();

		disableConfirmButton ();
	}

	void WriteQuestionFile(string name)
	{
        //// Get the object used to communicate with the server.
        //FtpWebRequest request = (FtpWebRequest)WebRequest.Create("ftp://ftpconnect.hcigames.com/tagorithms/" + name);
        //request.Method = WebRequestMethods.Ftp.UploadFile;

        ////// This example assumes the FTP site uses anonymous logon.  
        //request.Credentials = new NetworkCredential("play@hcigames.com", "mtAuNq42tQ9f");

        ////// Copy the contents of the file to the request stream.  
        //StreamReader sourceStream = new StreamReader("testfile.txt");
        //byte[] fileContents = Encoding.UTF8.GetBytes(sourceStream.ReadToEnd());
        //sourceStream.Close();
        //request.ContentLength = fileContents.Length;

        //Stream requestStream = request.GetRequestStream();
        //string content = "Question";
        //byte[] content_bytes = Encoding.UTF8.GetBytes(content);
        //requestStream.Write(content_bytes, 0, content_bytes.Length);
        ////requestStream.Write(fileContents, 0, fileContents.Length);
        //requestStream.Close();

        //FtpWebResponse response = (FtpWebResponse)request.GetResponse();

        //response.Close();


        GerateMTurkNumber.writeLineToOutputFile("Question");
        foreach (Question q in questions)
            GerateMTurkNumber.writeLineToOutputFile(q.ToString());
        GerateMTurkNumber.writeLineToOutputFile("");
        GerateMTurkNumber.writeFTPFile();


        using (StreamWriter sw = File.AppendText(name))
		{
			sw.WriteLine ("Question");
			foreach (Question q in questions)
				sw.WriteLine (q.ToString ());
			sw.WriteLine();
			sw.Close ();
		}
	}
		
	void Shuffle(List<Question> list)
	{
		int n = list.Count;

		System.Random rng = new System.Random ();
		while (n > 1) {
			n--;
			int k = Random.Range(0, n);
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
		if (activeQuestion < questions.Length) {
			questionText.text = questions [activeQuestion].text;
		} else 
		{
			WriteQuestionFile (GerateMTurkNumber.getFileName());
            play.onClick();
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
