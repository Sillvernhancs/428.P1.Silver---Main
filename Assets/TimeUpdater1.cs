using System.Collections;
using System.Collections.Generic;
using UnityEngine.Networking;
using UnityEngine;
using TMPro;
using System;
using System.Globalization;

public class TimeUpdater1 : MonoBehaviour
{
    public GameObject timeTextObject;
    string url = "http://worldtimeapi.org/api/timezone/Africa/Cairo";
    // string url = "http://worldtimeapi.org/api/timezone/America/Chicago";
    // Start is called before the first frame update
    void Start()
    {
        InvokeRepeating("UpdateTime", 0f, 1f);
    }

   
    void UpdateTime()
    {   
        StartCoroutine(GetRequest(url));
    }

    IEnumerator GetRequest(string url) {
        using (UnityWebRequest webRequest = UnityWebRequest.Get(url))
        {
            // Request and wait for the desired page.
            yield return webRequest.SendWebRequest();


            if (webRequest.result ==  UnityWebRequest.Result.ConnectionError)
            {
                Debug.Log(": Error: " + webRequest.error);
            }
            else
            {
                // print out the weather data to make sure it makes sense
                int startIndex = webRequest.downloadHandler.text.IndexOf("datetime") + 26;
                // Debug.Log(startIndex);
                // Debug.Log(endIndex);
                string hour = (webRequest.downloadHandler.text.Substring(startIndex, 3).Replace(":", string.Empty));
                string mins = (webRequest.downloadHandler.text.Substring(startIndex + 2, 3).Replace(":", string.Empty));
                // Debug.Log("\n" + hour + ":" + mins);
                DateTime time = DateTime.Parse(hour + ":" + mins);
                timeTextObject.GetComponent<TextMeshPro>().text = "time\n" + time.ToString("hh:mm tt");
            }
        }
    }
}