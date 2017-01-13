using UnityEngine;
using System.Collections;
using FileHelper;

public class MainCharacter : MonoBehaviour {

	public Sprite[] img;
	int flag;
	int index = 0;

	// Use this for initialization
	void Start () {
		index = 0;
		flag = 999;

		FileStreamHelper.log ("==========================================================" + "\n\n" + "Game Start\n\n");
		FileStreamHelper.log ("page 2");
	}
	
	// Update is called once per frame
	void Update () {
	
		if (flag < 10) {

			if (index < img.Length) {
				if (index == 0)
					FileStreamHelper.log ("start to blick eye");
				this.transform.GetComponent<SpriteRenderer> ().sprite = img [(index++) % img.Length];
			}

			else
				flag = Random.Range (10, 1000);



		} else {
			if(index == img.Length)
				FileStreamHelper.log ("end to blick eye");
			flag = Random.Range (0, 1000);
			index = 0;
		}
	}
}
