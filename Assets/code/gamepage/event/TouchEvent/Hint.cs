using UnityEngine;
using System.Collections;
using Instruction;
using ObjectHierachy;

public class Hint : MonoBehaviour {

	float time = 0;
	bool flag  = false;

	ArrayList blocks;

	public Sprite clicked;
	public Sprite unclicked;

	// Use this for initialization
	void Start () {
		blocks = new ArrayList ();
		unclicked = this.transform.GetComponent<SpriteRenderer> ().sprite;
	}
	
	// Update is called once per frame
	void Update () {
	}

	void OnMouseDown()
	{

		Map.instance.blockAction += hint;
		Map.instance.allBlockAction ();
		Map.instance.blockAction -= hint;

		this.transform.GetComponent<SpriteRenderer> ().sprite = clicked;

		FileHelper.FileStreamHelper.log ("hint btn clicked");
		string str = "";
		foreach (Block b in blocks)
			str += b.getIndex + " ";
		FileHelper.FileStreamHelper.log (str);
	}

	void OnMouseUp()
	{
		changColorWhite ();

		this.transform.GetComponent<SpriteRenderer> ().sprite = unclicked;

	}

	void hint(Block block)
	{
		if (block.index == Resource.character.index && block.color.Equals(block.defaultColor)) {
			changeColorCharacter (block, Resource.character);
		}
	}

	void changColorWhite()
	{
		foreach (Block block in blocks)
			block.changeBasicColor ();

		blocks.Clear ();
	}

	void changeColorCharacter(Block block, Character character)
	{
		blocks.Add (block);
		block.changeColor (character.Color);
	}
}
