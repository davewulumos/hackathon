using UnityEngine;
using System.Collections;

public class PlayerControllerJumper : MonoBehaviour {
	public float UpSpeed;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (Cardboard.SDK.Triggered) {
			/*
			GameObject vrPlayer = 
				Cardboard.SDK.GetComponentInChildren<CardboardHead>().gameObject;
			Vector3 shotRotation = vrLauncher.transform.rotation.eulerAngles;
			Vector3 shotPosition = new Vector3 (vrLauncher.transform.position.x, vrLauncher.transform.position.y - 0.2f, vrLauncher.transform.position.z);
			*/


			this.GetComponent<Rigidbody>().velocity = this.transform.up * UpSpeed;
			Debug.Log ("test");
		}
	}
}
