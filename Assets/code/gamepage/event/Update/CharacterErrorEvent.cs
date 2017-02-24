using UnityEngine;
using System.Collections;
using Instruction;
using ObjectHierachy;

public class CharacterErrorEvent : MonoBehaviour {

	public static bool error_mov = false;
	public static bool error_jmp = false;
	public static bool error_brk = false;

	bool flag_log = true;

	public static int index;

	float time = 0;

	float bound;
	public static Vector3 position;
	bool flag = true;

	// Use this for initialization
	void Start () {
		bound = Map.instance.unitSize/10;
	}
	
	// Update is called once per frame
	void Update () {
	
		if (error_mov) {

			if ((time += Time.deltaTime) < 1) {
				//action is in CharacterImgChang
			} else {
				time = 0;
				error_mov = false;
				Resource.character.Stop ();
			}
		} else if (error_jmp) {

			if (flag_log) {
				FileHelper.FileStreamHelper.log ("error_jmp is true");
				flag_log = false;
				Resource.character.obj.GetComponent<Animator> ().SetTrigger ("wall_side");
			}

			if(Resource.character.ActionFinished) {
				Resource.character.afterActionFinish ();
				time = 0;
				error_jmp = false;
				flag_log = true;
				Resource.character.fitPosition ();
				Resource.character.characterStatus.PointQueue.Clear ();
				//Resource.character.toStartPoint ();
				Resource.character.Moving = false;
				Resource.character.after ();

				FileHelper.FileStreamHelper.log ("error_jmp is back to false");
			}
		} else {
			if(Resource.character != null)
				position = Resource.character.obj.GetComponent<Transform> ().position;
		}

	}
}
