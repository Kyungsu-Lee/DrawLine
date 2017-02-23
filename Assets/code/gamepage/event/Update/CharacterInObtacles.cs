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

	bool fireFlag = false;
	bool onceFlag = true;

	// Use this for initialization
	void Start () {
		fireScale = fire.GetComponent<Transform> ().localScale;
	}

	// Update is called once per frame
	void Update () {

		if (Resource.character != null) 
		{
			character = Resource.character;

			if (character != null && character.obtacles == ObtacleKind.BAD) {

				if ((time += Time.deltaTime) < 0.5f) {

					this.character.obj.GetComponent<Transform> ().localScale = 
						new Vector3 (
						characterScale.x * (1 - 2 * time),
						characterScale.y * (1 - 2 * time),
						characterScale.z
					);

					this.character.obj.GetComponent<Transform> ().Rotate (new Vector3 (360 * 2 * time, 0));

				} else if (time >= 0.5f) {
					try {
						character.toPoint (character.characterStatus.PointStack.Pop () as Point, character.characterStatus.PointStack.Pop () as Point);
					} catch (Exception e) {
						character.toStartPoint ();
					}
					this.character.obj.GetComponent<Transform> ().localScale = new Vector3 (characterScale.x, characterScale.y, characterScale.z);
					this.character.obj.GetComponent<Transform> ().localRotation = new Quaternion (0, 0, 0, 0);
					time = 0;
					character.obtacles = ObtacleKind.NULL;
				}


			} else if (character.obtacles == ObtacleKind.FIRE) {


				if (character.obj.GetComponent<Animator> ().GetCurrentAnimatorStateInfo (0).IsName ("red_fire"))
					fireFlag = true;

				if (!fireFlag && onceFlag) {
					this.character.obj.GetComponent<Animator> ().SetTrigger ("fire");
					onceFlag = false;
				}
				
				/*else if ((time += Time.deltaTime) < 10f) {
					float rate = Mathf.Pow (time, 2.0f);
					this.character.obj.GetComponent<SpriteRenderer> ().color = new Color (1, 0, 0, 1 - 2 * time);
					this.character.onBlock ().OnObject.obj.GetComponent<Transform> ().localScale = new Vector3 (fireScale.x * (0.32f + 0.2f * (0.5f - rate)), fireScale.y * (0.32f + 0.2f * (0.5f - rate)), fireScale.z);
					this.character.obj.GetComponent<Transform> ().localScale = new Vector3 (characterScale.x * (0.7f + 0.2f * (rate)), characterScale.y * (0.7f + 0.2f * (rate)), characterScale.z);
				

				} */


				else if(fireFlag && !character.obj.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).IsName("red_fire"))
				{
					//character.toStartPoint ();
					try {
						character.toPoint (character.characterStatus.PointStack.Pop () as Point, character.characterStatus.PointStack.Pop () as Point);
					} catch (Exception e) {
						character.toStartPoint ();
					}
					this.character.obj.GetComponent<SpriteRenderer> ().color = new Color (1, 1, 1, 1);
					this.character.onBlock ().OnObject.obj.GetComponent<Transform> ().localScale = fireScale;
					this.character.obj.GetComponent<Transform> ().localScale = new Vector3 (characterScale.x, characterScale.y, characterScale.z);
					time = 0;
					character.obtacles = ObtacleKind.NULL;
					onceFlag = true;
					fireFlag = false;
				}

				

			} else if (character.obtacles == ObtacleKind.WATER) {
				if ((time += Time.deltaTime) < 0.5f) {
					float rate = Mathf.Pow (time, 2.0f);
					this.character.obj.GetComponent<SpriteRenderer> ().color = new Color (67 / 255.0f, 218 / 255.0f, 236 / 255.0f, 1 - 2 * time);
					this.character.obj.GetComponent<Transform> ().localScale = new Vector3 (characterScale.x * (0.7f + 0.2f * (rate)), characterScale.y * (0.7f + 0.2f * (rate)), characterScale.z);
				} else {
					//character.toStartPoint ();
					try {
						character.toPoint (character.characterStatus.PointStack.Pop () as Point, character.characterStatus.PointStack.Pop () as Point);
					} catch (Exception e) {
						character.toStartPoint ();
					}
					this.character.obj.GetComponent<SpriteRenderer> ().color = new Color (1, 1, 1, 1);
					this.character.obj.GetComponent<Transform> ().localScale = new Vector3 (characterScale.x, characterScale.y, characterScale.z);
					time = 0;
					character.obtacles = ObtacleKind.NULL;
				}
			} else if (character.obtacles == ObtacleKind.ROCK)
				
			{
				if ((time += Time.deltaTime) < 0.5f) {
					this.character.obj.GetComponent<SpriteRenderer> ().color = new Color (1, 1, 1, 1 - 2 * time);
				} else {
					//character.toStartPoint ();
					try
					{
						character.toPoint(character.characterStatus.PointStack.Pop() as Point , character.characterStatus.PointStack.Pop() as Point);
					}catch(Exception e) {
						character.toStartPoint ();
					}
					this.character.obj.GetComponent<SpriteRenderer> ().color = new Color (1, 1, 1, 1);
					time = 0;
					character.obtacles = ObtacleKind.NULL;
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

