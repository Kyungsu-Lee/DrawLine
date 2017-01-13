using UnityEngine;
using System.Collections;
using System.IO;
using System;
using Instruction;
using FileHelper;
using UnityEngine.SceneManagement;

public class SetCircle : MonoBehaviour {

	public GameObject[] circles;

	public Sprite circle_clear;
	public Sprite circle_unclear;

	public static bool[] isclear;

	// Use this for initialization
	void Start () {

		FileHelper.FileStreamHelper.log ("open page 4");

		int index = 0;

		isclear = new bool[12];

		string str = FileStreamHelper.readStringFromFile ("stage" + Resource.stage + ".txt");

		if (str == null) {
			FileStreamHelper.writeStringToFile ("0,0,0,0,0,0,0,0,0,0,0,0", "stage" + Resource.stage + ".txt");
			str = FileStreamHelper.readStringFromFile ("stage" + Resource.stage + ".txt");
		}

		string[] stage = str.Split (new char[]{ ',' });

		string deb = "";

		foreach (string s in stage) {
			if (s != null && (s.Equals ("0") || s.Equals ("1"))) 
			{
				try {
					
					if (!(isclear [index] = !s.Equals ("0")))
						circles [(index)++].transform.GetComponent<SpriteRenderer> ().sprite = circle_unclear;
					else
						circles [(index)++].transform.GetComponent<SpriteRenderer> ().sprite = circle_clear;
					
				} catch (Exception e) 
				{
					
					FileHelper.FileStreamHelper.log ("file open error " + e.StackTrace);
				}
				deb += s;
			} else {
				deb += s;

				char[] c = s.ToCharArray ();

				string error = "";

				foreach (char cc in c)
					error += cc.GetHashCode () + " ";

				FileHelper.FileStreamHelper.log ("error string : " + error);
			}
		}
	
		FileHelper.FileStreamHelper.log ("Read string from file \"stage" + Resource.stage + ".txt\" :  " + deb);

	}
	
	// Update is called once per frame
	void Update () {


	}

	void OnMouseUp()
	{
		
	}
}
