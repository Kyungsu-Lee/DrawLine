using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using Instruction;


public class ToNextPage4 : MonoBehaviour {

	Sprite sprite;
	public Sprite clicked;

	// Use this for initialization
	void Start () {
		sprite = this.transform.GetComponent<SpriteRenderer> ().sprite;
	}
	
	// Update is called once per frame
	void Update () {
		

	}

	void OnMouseDown()
	{
		for (int i = 0; i < 12; i++)
			if (this.transform.Equals (GameObject.Find ("circle_clear (" + i + ")").transform)) {
				this.transform.GetComponent<SpriteRenderer> ().sprite = clicked;
			}
	}

	void OnMouseUp()
	{
		int idx = 0;

		for (int i = 0; i < 12; i++)
			if (this.transform.Equals (GameObject.Find ("circle_clear (" + i + ")").transform))
				idx = i;

		if (idx == 0 || SetCircle.isclear [idx] || SetCircle.isclear [idx - 1])
		{
			for (int i = 0; i < 12; i++)
				if (this.transform.Equals (GameObject.Find ("circle_clear (" + i + ")").transform)) {
					Resource.stage += i;
					this.transform.GetComponent<SpriteRenderer> ().sprite = sprite;
				}

			Resource.previousScene = "p4";

			SceneManager.LoadScene ("Main");

			FileHelper.FileStreamHelper.log ("clicked stage " + (Resource.stage % 100 + 1));
		}
	}
}
