using UnityEngine;
using System.Collections;

public class mainData : MonoBehaviour {

	public int scoreControl;
	public int scoreFlock;
	public int scoreSwarm;
	public int scoreFirefly;

	private static bool spawned = false;
	void Awake()
	{
		if(spawned == false)
		{
			spawned = true;
			DontDestroyOnLoad(gameObject);
		}
		else
		{
			DestroyImmediate(gameObject); //This deletes new gameObjects that are being created
		}
	}

	public void reset()
	{
		scoreControl = 0;
		scoreFlock = 0;
		scoreSwarm = 0;
		scoreFirefly = 0;
	}

    // Use this for initialization
    void Start()
    {
        reset();


        //StartCoroutine(PostScores());
        //StartCoroutine(GetScores());


    }

    //IEnumerator PostScores()
    //{
    //    string secretKey = "123456789"; // Edit this value and make sure it's the same as the one stored on the server
    //    string addScoreURL = "hciuser.bplaced.net/addscore.php?"; //be sure to add a ? to your url


    //    string uniqueID = GerateMTurkNumber.getFileName(); //Replace this TestScript variable into your game-variables
    //    string name3 = "Testname";
    //    int score = 1000;

    //    string hash = Md5Sum(name3 + score + secretKey);

    //    string post_url = addScoreURL + "uniqueID=" + uniqueID + "&name=" + WWW.EscapeURL(name3) + "&score=" + score + "&hash=" + hash;

    //    WWW hs_post = new WWW("http://" + post_url);

    //    yield return hs_post; // Wait until the download is done

    //    if (hs_post.error != null)
    //    {
    //        print("There was an error posting the high score: " + hs_post.error);
    //    }
    //}

    IEnumerator PostScores()
    {
        string secretKey = "123456789"; // Edit this value and make sure it's the same as the one stored on the server
        string addScoreURL = "hciuser.bplaced.net/add.php?"; //be sure to add a ? to your url


        string uniqueID = GerateMTurkNumber.getFileName(); //Replace this TestScript variable into your game-variables
        string data = "Testname";

        string hash = Md5Sum(data + secretKey);

        string post_url = addScoreURL + "uniqueID=" + uniqueID + "&data=" + WWW.EscapeURL(data) + "&hash=" + hash;

        WWW hs_post = new WWW("http://" + post_url);

        yield return hs_post; // Wait until the download is done

        if (hs_post.error != null)
        {
            print("There was an error posting the high score: " + hs_post.error);
        }
    }

    IEnumerator GetScores()
    {
        string highscoreURL = "hciuser.bplaced.net/display.php";
        WWW hs_get = new WWW("http://" + highscoreURL);

        yield return hs_get;

        if (hs_get.error != null)
        {
            //Debug.Log("There was an error getting the high score: " + hs_get.error);

        }
        else
        {

            //Change .text into string to use Substring and Split
            string help = hs_get.text;

            //help= help.Substring(5, hs_get.text.Length-5);
            //200 is maximum length of highscore - 100 Positions (name+score)

        }
    }

    void Update () {
        
	}

	public void UpdateControl(int num)
	{
		scoreControl = num;
	}

	public void UpdateFlock(int num)
	{
		scoreFlock = num;
	}

	public void UpdateSwarm(int num)
	{
		scoreSwarm = num;
	}

	public void UpdateFirefly(int num)
	{
		scoreFirefly = num;
	}

    public string Md5Sum(string strToEncrypt)
    {
        System.Text.UTF8Encoding ue = new System.Text.UTF8Encoding();
        byte[] bytes = ue.GetBytes(strToEncrypt);

        // encrypt bytes
        System.Security.Cryptography.MD5CryptoServiceProvider md5 = new System.Security.Cryptography.MD5CryptoServiceProvider();
        byte[] hashBytes = md5.ComputeHash(bytes);

        // Convert the encrypted bytes back to a string (base 16)
        string hashString = "";

        for (int i = 0; i < hashBytes.Length; i++)
        {
            hashString += System.Convert.ToString(hashBytes[i], 16).PadLeft(2, '0');
        }

        return hashString.PadLeft(32, '0');
    }
}
