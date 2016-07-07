using UnityEngine;
using System.Collections;

public class Move : MonoBehaviour {
	private float dx,dy,dz;
	private Rigidbody rb;
	public float speed = 10;

	// Use this for initialization
	void Start () {
		Debug.Log ("Start movement");
		dx = Random.Range(-1, 1) * speed;
		dy = Random.Range(-1, 1) * speed;
		dz = Random.Range(-1, 1) * speed;

		rb = this.GetComponent<Rigidbody> ();
		rb.velocity = transform.up * dx + transform.right * dy + transform.forward * dz;
	}
	
	// Update is called once per frame
	void Update () {
		//rb.velocity = new Vector3 (dx, dy, dz);
	}
}
