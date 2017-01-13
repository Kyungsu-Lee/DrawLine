using UnityEngine;
using System.Collections;
using Instruction;
using UnityEngine.SceneManagement;
using System;

public class ToNextPage_3 : MonoBehaviour {

	public Sprite[] clicked;
	public Sprite[] unclicked;

	int index;

	// Use this for initialization
	void Start () {
		Resource.stage = 0;
		FileHelper.FileStreamHelper.log ("on page 3");
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnMouseDown()
	{
		for(int i=3; i<7; i++){
			if(this.transform.Equals(GameObject.Find("stage_" + i).transform))
			{
				this.transform.GetComponent<SpriteRenderer> ().sprite = clicked [i - 3];
				break;
			}
		}
	}

	void OnMouseUp()
	{
		try{
			for(int i=3; i<7; i++)
				if(this.transform.Equals(GameObject.Find("stage_" + i).transform))
					Resource.stage += i * 100;

			for(int i=3; i<7; i++){
				if(this.transform.Equals(GameObject.Find("stage_" + i).transform))
				{
					this.transform.GetComponent<SpriteRenderer> ().sprite = unclicked [i - 3];
					break;
				}
			}

			FileHelper.FileStreamHelper.log("clicked next stage btn : " + Resource.stage / 100);

			Resource.previousScene = "p3";
			SceneManager.LoadScene ("p4");
		}
		catch(Exception e) 
		{
			FileHelper.FileStreamHelper.log (e.StackTrace);
		}
	}
}
