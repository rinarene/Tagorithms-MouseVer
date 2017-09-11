using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using System.IO;

using System.Net;
using System.Text;


public class GerateMTurkNumber : MonoBehaviour {

    private static int fileOffset = 0;

    //private static List<byte[]> outFileList = new List<byte[]>();
    private static List<string> outFileList = new List<string>();
    public static System.Random rng = new System.Random();
    private static long MTurkGerationNumber = System.Convert.ToInt64(rng.NextDouble() * 1000000) * 17;




    public static long getMTurkNumber()
    {
        return MTurkGerationNumber;
    }

    public static string getFileName()
    {
        return getMTurkNumber().ToString() + ".csv";
    }

    // Use this for initialization
    void Start() {
    }

    // Update is called once per frame
    void Update() {

    }

    public static void writeLineToOutputFile(string str)
    {
        str += "\n";
        //byte[] content_bytes = Encoding.UTF8.GetBytes(str);
        outFileList.Add(str);

        //fileOffset += content_bytes.Length;
    }

    public static string getOutputString()
    {
        string file = "";
        foreach (string o in outFileList)
            file += o;
        return file;

    }

    public static void writeFTPFile()
    {
        // Get the object used to communicate with the server.

        //FtpWebRequest request = (FtpWebRequest)WebRequest.Create("ftp://ftpconnect.hcigames.com/tagorithms/files/" + getFileName());
        //request.Method = WebRequestMethods.Ftp.UploadFile;

        //request.Credentials = new NetworkCredential("play@hcigames.com", "mtAuNq42tQ9f");

        //Stream requestStream = request.GetRequestStream();

        //foreach (var bytes in outFileList)
        //{
        //    requestStream.Write(bytes, 0, bytes.Length);
        //}
        //request.ContentLength = fileOffset;


        //requestStream.Close();

        //FtpWebResponse response = (FtpWebResponse)request.GetResponse();
        //response.Close();
    }



    public static void writeDatabase()
    {

        

    }


}
    
