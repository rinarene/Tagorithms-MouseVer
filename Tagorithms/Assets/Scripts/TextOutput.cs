using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class TextOutput : MonoBehaviour {

    private mainData data;
    GameSettings Settings;


    void Start()
    {
        Settings = GameObject.Find("AppliedSettings").GetComponent<GameSettings>();

        Debug.Log(Settings.fileLoc);

        GameObject dataObject = GameObject.FindWithTag("Main");
        if (dataObject != null)
        {
            data = dataObject.GetComponent<mainData>();
        }
        if (data == null)
        {
            Debug.Log("Cannot find 'mainData' script");
        }
       
        using (StreamWriter sw = File.AppendText(Settings.fileLoc))
        {
            sw.WriteLine("blue,{0}", data.scoreControl);
            sw.WriteLine("green,{0}", data.scoreFlock);
            sw.WriteLine("yellow,{0}", data.scoreSwarm);
            sw.WriteLine("red,{0}", data.scoreFirefly);
            sw.WriteLine();
        }
    }	
}
