using UnityEngine;
using System.Collections;
using ObjectHierachy;
using Instruction;

public class CharacterTouchEvent : MonoBehaviour {

	Character thisCharacter = null;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if(thisCharacter == null)
			thisCharacter = Character.find (this.transform.gameObject);

		if (thisCharacter != null && thisCharacter.IsActivated) {
			// character activated action.
		}
	}

	public void OnMouseDown()
	{
	}

	public void OnMouseUp()
	{
		thisCharacter.activate ();
	}

}
