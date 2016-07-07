using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {
	private CardboardHead head;
	private Rigidbody rb;

	public float speed;


	// Use this for initialization
	void Start () {
		head = Cardboard.SDK.GetComponentInChildren<CardboardHead> ();
		rb = Cardboard.SDK.GetComponentInChildren<Rigidbody> ();
		Debug.Log ("Initialized");
	}
	
	// Update is called once per frame
	void Update () {

		if (Cardboard.SDK.Triggered) {
			rb.velocity += speed * head.Gaze.direction;
		}
	}
}
