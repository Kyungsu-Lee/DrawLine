using UnityEngine;
using System.Collections;
using Instruction;
using ObjectHierachy;
using System;

public class CharacterInObtacles : MonoBehaviour {

	Character character;
	//Vector3 localscale;

	public GameObject fire;
	Vector3 fireScale;
	Vector3 characterScale;

	float time = 0;

	bool onceFlag = true;

	// Use this for initialization
	void Start () {
		fireScale = fire.GetComponent<Transform> ().localScale;
	}

	MapObject mapObject;

	// Update is called once per frame
	void Update () {

		if (Resource.character != null) 
		{
			character = Resource.character;

			if (character != null && character.obtacles == ObtacleKind.BAD) 
			{

				if (onceFlag) {
					mapObject =  character.onBlock ().OnObject;
					mapObject.hide ();
					this.character.obj.GetComponent<Animator> ().SetTrigger ("bad");
					onceFlag = false;
				}

				else if(character.ActionFinished)
				{
					try {
						character.toPoint (character.characterStatus.PointStack.Pop () as Point, character.characterStatus.PointStack.Pop () as Point);
					} catch (Exception e) {
						character.toStartPoint ();
					}
					mapObject.show ();
					this.character.obj.GetComponent<SpriteRenderer> ().color = new Color (1, 1, 1, 1);
					character.obtacles = ObtacleKind.NULL;
					character.afterActionFinish ();
					onceFlag = true;
				}


			} else if (character.obtacles == ObtacleKind.FIRE) {

				if (onceFlag) {
					this.character.obj.GetComponent<Animator> ().SetTrigger ("fire");
					onceFlag = false;
				}

				else if(character.ActionFinished)
				{
					try {
						character.toPoint (character.characterStatus.PointStack.Pop () as Point, character.characterStatus.PointStack.Pop () as Point);
					} catch (Exception e) {
						character.toStartPoint ();
					}
					this.character.obj.GetComponent<SpriteRenderer> ().color = new Color (1, 1, 1, 1);
					character.obtacles = ObtacleKind.NULL;
					character.afterActionFinish ();
					onceFlag = true;
				}


			} else if (character.obtacles == ObtacleKind.WATER) 
			{
				if (onceFlag) {
					this.character.obj.GetComponent<Animator> ().SetTrigger ("water");
					onceFlag = false;
				}

				else if(character.ActionFinished)
				{
					try {
						character.toPoint (character.characterStatus.PointStack.Pop () as Point, character.characterStatus.PointStack.Pop () as Point);
					} catch (Exception e) {
						character.toStartPoint ();
					}
					this.character.obj.GetComponent<SpriteRenderer> ().color = new Color (1, 1, 1, 1);
					character.obtacles = ObtacleKind.NULL;
					character.afterActionFinish ();
					onceFlag = true;
				}

			} else if (character.obtacles == ObtacleKind.ROCK)
				
			{
				if (onceFlag) {
					this.character.obj.GetComponent<Animator> ().SetTrigger ("rock");
					onceFlag = false;
				}

				else if(character.ActionFinished)
				{
					try {
						character.toPoint (character.characterStatus.PointStack.Pop () as Point, character.characterStatus.PointStack.Pop () as Point);
					} catch (Exception e) {
						character.toStartPoint ();
					}
					this.character.obj.GetComponent<SpriteRenderer> ().color = new Color (1, 1, 1, 1);
					character.obtacles = ObtacleKind.NULL;
					character.afterActionFinish ();
					onceFlag = true;
				}

			} 
			else 
			{
				if (this.character != null && this.character.obj != null) {
					//localscale = this.transform.GetComponent<Transform> ().localScale;
					characterScale = this.character.obj.GetComponent<Transform> ().localScale;
				}
			}
		}
	}
} 

