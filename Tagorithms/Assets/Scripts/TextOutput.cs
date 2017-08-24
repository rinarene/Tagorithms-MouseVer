using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class TextOutput : MonoBehaviour {

    private mainData data;
    private Randomize r;


    void Start()
    {
        r = GameObject.Find("Randomizer").GetComponent<Randomize>();

        GameObject dataObject = GameObject.FindWithTag("Main");
        if (dataObject != null)
        {
            data = dataObject.GetComponent<mainData>();
        }
        if (data == null)
        {
            Debug.Log("Cannot find 'mainData' script");
        }
       
        
    }
    
    public void Record()
    {
        using (StreamWriter sw = File.AppendText(GerateMTurkNumber.getFileName()))
        {
            sw.WriteLine("flockScore,{0},flockCondition,{1},{2},{3},{4},{5}", data.scoreFlock, r.allignW, r.cohW, r.sepW, r.dirW, r.maxBoid);
            sw.WriteLine("swarmScore,{0},swarmCondition,{1},{2},{3},{4},{5}", data.scoreSwarm, r.fwdW, r.vecPStr, r.vecGStr, r.boidRad, r.maxBoid);
            sw.WriteLine();
            sw.Close();
        }

        data.scoreFlock = 0;
        data.scoreSwarm = 0;

    }
}
