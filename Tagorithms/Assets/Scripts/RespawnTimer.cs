using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RespawnTimer : MonoBehaviour
{

    public float respawnTime = 5f;
    public float respawnRef = 5f;
    public int randAddRespawn = 5;
    private int randAdd;
    private bool respawnBool = true;
    private int heightPos;
    public int algoType = 1;
    GameSettings Settings;

    // respawnRef variable for resetting variable


    void Start()
    {
        //  Accesses AppliedSettings variables
        Settings = GameObject.Find("AppliedSettings").GetComponent<GameSettings>();
        switch (algoType)
        {
            // red algo
            case 1:
                respawnTime = Settings.rSpawn;
                respawnRef = Settings.rSpawn;
                randAddRespawn = Settings.rRand;
                break;
            // blue algo
            case 2:
                respawnTime = Settings.bSpawn;
                respawnRef = Settings.bSpawn;
                randAddRespawn = Settings.bRand;
                break;

            // green algo
            case 3:
                respawnTime = Settings.gSpawn;
                respawnRef = Settings.gSpawn;
                randAddRespawn = Settings.gRand;
                break;

            // yellow algo
            case 4:
                respawnTime = Settings.ySpawn;
                respawnRef = Settings.ySpawn;
                randAddRespawn = Settings.yRand;
                break;
        }
        //Settings.GetComponent<>
        // random respawn intiate, add onto respawnTime so more natural respawn        
        randAdd = Random.Range(1, randAddRespawn + 1);
        respawnTime += randAdd;
        respawnRef += randAdd;
        
    }


    void Update()
    {       
        Vector3 pos = new Vector3();
        // select player gameObject
        GameObject player = GameObject.Find("Player");
        // select boid's collider
        Collider2D boidCollider = this.GetComponent<Collider2D>();
        // select player's collider
        Collider2D playerCollider = player.GetComponent<Collider2D>();
        // clamp spawn time so it doesn't go negative, 50 is arbituary
        respawnTime = Mathf.Clamp(respawnTime, 0f, 50f);

        // if boidcollider is not in contact with player collider
        if (!(boidCollider.IsTouching(playerCollider)))
        {
            respawnTime -= Time.deltaTime;
            if (respawnTime <= 0)
            {   
                
                //generates random width and height
                int caseSwitch = Random.Range(1, 5);

                // spawns randomly along edges of screen
                switch (caseSwitch)
                {
                    case 1: // bottom edge of screen
                        pos = Camera.main.ScreenToWorldPoint(new Vector3(Random.Range(0, Screen.width), 0));
                        break;

                    case 2: // top edge of screen
                        pos = Camera.main.ScreenToWorldPoint(new Vector3(Random.Range(0, Screen.width), Screen.height));
                        break;

                    case 3: // left edge of screen
                        pos = Camera.main.ScreenToWorldPoint(new Vector3(0, Random.Range(0, Screen.height)));
                        break;

                    case 4: // right edge of screen
                        pos = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, Random.Range(0, Screen.height)));
                        break;
                }
              
                pos.z = 0f;
                boidCollider.transform.position = pos;
                boidCollider.GetComponent<Rigidbody2D>().velocity = new Vector3(Random.Range(-1.0F, 1.0F), Random.Range(-1.0F, 1.0F), Random.Range(0.0F, 1.0F));

                respawnTime = respawnRef;
            }
        }

        else
        {
            respawnTime = respawnRef;
        }

    }
}

