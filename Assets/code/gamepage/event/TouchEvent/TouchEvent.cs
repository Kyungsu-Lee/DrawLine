using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class TouchEvent : MonoBehaviour {

	bool overCheck = false;
	float time = 0;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

		if (Mathf.Sqrt( time) < 1) {
			time += Time.deltaTime/10;
			//this.transform.GetComponent<SpriteRenderer> ().color = new Color (Mathf.Sqrt( time), Mathf.Sqrt( time),Mathf.Sqrt( time), 1);
		} else
			time = 0;

		//Debug.Log ( Mathf.Sqrt( time));
	}

	public void OnMouseDown()
	{
		FileHelper.FileStreamHelper.log ("down");
		overCheck = true;
		this.transform.GetComponent<SpriteRenderer> ().color = Color.black;
	}

	public void OnMouseUp()
	{
		FileHelper.FileStreamHelper.log ("UP");
		overCheck = false;
		this.transform.GetComponent<SpriteRenderer> ().color = Color.white;
	}

	public void OnMouseOver()
	{
		if(overCheck)
			FileHelper.FileStreamHelper.log ("over");
		time = 0;

	}
}
