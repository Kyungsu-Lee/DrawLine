using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using Instruction;

public class PreviousScene : MonoBehaviour {

	public Sprite clicked;
	public Sprite unclicked;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnMouseDown()
	{
		this.transform.GetComponent<SpriteRenderer> ().sprite = clicked;
	}

	void OnMouseUp()
	{
		SceneManager.LoadScene ("p3");

		this.transform.GetComponent<SpriteRenderer> ().sprite = unclicked;
	}
}
