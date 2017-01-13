using UnityEngine;
using UnityEngine.Sprites;
using UnityEngine.UI;
using System.Collections;
using Instruction;
using UnityEngine.SceneManagement;

public class PreviousPageOnGame : MonoBehaviour {

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
		Resource.stage = (Resource.stage / 100) * 100;
		SceneManager.LoadScene ("p4");

		this.transform.GetComponent<SpriteRenderer> ().sprite = unclicked;
	}
}
