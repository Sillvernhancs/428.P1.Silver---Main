using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
using System.Globalization;

public class timeTeller : MonoBehaviour
{
    public GameObject timeTextObject;
    string url = "http://worldtimeapi.org/api/timezone/Africa/Cairo";
    // Start is called before the first frame update
    void Start()
    {
        InvokeRepeating("UpdateTime", 0f, 10f);
    }

   
    void UpdateTime()
    {   
        // var Egypt = new CultureInfo("fr-FR");
        // DateTime utcDate = DateTime.UtcNow;
        // timeTextObject.GetComponent<TextMeshPro>().text = utcDate.ToString(Egypt);
        timeTextObject.GetComponent<TextMeshPro>().text = "pog";
        // Console.WriteLine(utcDate.ToString(Egypt));
    }
}