using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class mcSunScript : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject cube;
    public GameObject sun;
    int state = 0;
    // Update is called once per frame
    void Update()
    {
        if (Vector3.Dot(cube.transform.up, Vector3.down) > 0) {
            Debug.Log("upside down");
            // sun.GetComponent<Light>().enabled = false;
            if (state == 0) {
                state = 1;

            } else if (state == 2) {
                state = 3;
            }
        } else {
            Debug.Log("right side up");
            // sun.GetComponent<Light>().enabled = true;
            if (state == 1) {
                state = 2;
            } else if (state == 3) {
                state = 0;
            }
        }
        Debug.Log(state);
        if (state == 0) { 
            sun.GetComponent<Light>().enabled = true;
        } else if (state == 2) {
            sun.GetComponent<Light>().enabled = false;
        }
    }
}
