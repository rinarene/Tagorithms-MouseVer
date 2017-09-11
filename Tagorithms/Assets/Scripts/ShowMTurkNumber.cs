using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;

public class ShowMTurkNumber : MonoBehaviour {

	// Use this for initialization
	void Start () {
        //gameObject.GetComponent<Text>().text =	GerateMTurkNumber.getMTurkNumber ().ToString();

        //GerateMTurkNumber.writeFTPFile();


        Debug.Log (GerateMTurkNumber.getMTurkNumber ().ToString ());

        StartCoroutine(PostScores());

    }

    IEnumerator PostScores()
    {
        string secretKey = "123456789"; // Edit this value and make sure it's the same as the one stored on the server
        string addScoreURL = "hciuser.bplaced.net/add.php?"; //be sure to add a ? to your url


        string uniqueID = GerateMTurkNumber.getFileName(); //Replace this TestScript variable into your game-variables
        string data = GerateMTurkNumber.getOutputString();

        data = data.Replace("\"", "");
        data = data.Replace(" ", "");
        data = data.Replace(",", "_");
        data = data.Replace("\n", "-");
        data = data.Replace(".", ".");

        data = WWW.EscapeURL(data);

        string hash = Md5Sum(data + secretKey);

        string post_url = addScoreURL + "uniqueID=" + uniqueID + "&data=" + WWW.EscapeURL(data) + "&hash=" + hash;

        WWW hs_post = new WWW("http://" + post_url);

        yield return hs_post; // Wait until the download is done

        if (hs_post.error != null)
        {
            print("There was an error posting the high score: " + hs_post.error);
        }
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

    // Update is called once per frame
    void Update () {
		GetComponent<InputField> ().text = GerateMTurkNumber.getMTurkNumber ().ToString();
	}
};
