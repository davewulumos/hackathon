using UnityEngine;
using System.Collections;

public class RoadGamePlayerController : MonoBehaviour {
	public GameObject[] sectionMarkers;
	public float rotationDamping;
	public float speed;

	private CardboardHead head;
	private Rigidbody rb;

	private int lane;
	private Vector3 waypoint;
	private Vector3[] waypoints;
	private int WPindexPointer;
	private int shields;
	private int numSections;
	private bool reachedNextWaypoint;

	// Use this for initialization
	void Start () {
		head = Cardboard.SDK.GetComponentInChildren<CardboardHead> ();
		rb = Cardboard.SDK.GetComponentInChildren<Rigidbody> ();
		lane = 2;
	}

	void Awake() {
		numSections = sectionMarkers.Length;
		waypoints = new Vector3[numSections];
		for (int i = 0; i < numSections; i++) {
			waypoints [i] = sectionMarkers [i].transform.position;
		}
		WPindexPointer = 0;
	}

	// Update is called once per frame
	void Update () {
		approachWaypoint ();

		/*
		Vector3 rot = head.transform.eulerAngles;
		Vector3 position = rb.transform.position;
		float dx;

		if (rot.z > 350 && rot.z < 355) {
			dx = 355 - rot.z;
			if (dx > 5) {
				dx = 5;
			}
			rb.velocity = Vector3.right * dx;

		} else if (rot.z > 5 && rot.z < 10) {
			// move right
			dx = rot.z - 5;
			if (dx > 5) {
				dx = 5;
			}
			rb.velocity = Vector3.left * dx;

		}
		rb.position = new Vector3 (Mathf.Clamp (rb.position.x, -3, 3), 1.5f, 0);
		*/		
	}

	void approachWaypoint ()
	{                    
		waypoint = waypoints [WPindexPointer];
		var rotation = Quaternion.LookRotation(waypoint - transform.position);
		transform.rotation = Quaternion.Slerp(transform.rotation, rotation, Time.deltaTime * rotationDamping);

		transform.Translate (0,0,Time.deltaTime * speed);


		float dist = Vector3.Distance(waypoint, transform.position);

		//print ("dist " + dist);

		if (dist < 2 && reachedNextWaypoint == false) {
			print("PLAYER: hit waypoint " + WPindexPointer);

			reachedNextWaypoint = true;
			if (WPindexPointer < numSections-1) {
				WPindexPointer++;
			} else {
				speed = 0;
			}
		} else if (reachedNextWaypoint == true) {
			//print("exiting waypoint " + WPindexPointer);
			reachedNextWaypoint = false;
		}

	}
}
