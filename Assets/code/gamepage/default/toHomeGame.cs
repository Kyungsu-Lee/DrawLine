using UnityEngine;
using System.Collections;
using Instruction;
using UnityEngine.SceneManagement;

public class toHomeGame : MonoBehaviour {
	
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
		Resource.clear ();
		SceneManager.LoadScene ("p2");

		this.transform.GetComponent<SpriteRenderer> ().sprite = unclicked;
	}
}
