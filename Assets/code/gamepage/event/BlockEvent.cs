using UnityEngine;
using System.Collections;
using ObjectHierachy;
using Instruction;
using UnityEngine.SceneManagement;
using UnityEngine.Scripting;

public class BlockEvent : MonoBehaviour {


	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {

	}

	public void OnMouseDown()
	{

	}

	void OnMouseUp()
	{
		if (!this.transform.GetComponent<SpriteRenderer> ().color.Equals (new Color (1, 1, 1, 1))) {

			Color color = this.transform.GetComponent<SpriteRenderer> ().color;

			foreach (Character c in Character.characters)
				if (c.Color.Equals (color)) {
					c.toStartPoint ();
				}
		}
	}

}
