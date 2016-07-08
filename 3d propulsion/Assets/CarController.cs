using UnityEngine;
using System.Collections;

public class CarController : MonoBehaviour {

	private Vector3 waypoint;
	private Vector3[] waypoints;
	private int WPindexPointer;
	private int shields;
	private int numSections;
	private bool reachedNextWaypoint;

	public float speed = 10;
	public int nextWaypointIndex;
	public float rotationDamping = 3f;
	public string position = "c";

	private bool gameStarted = false;

	// Use this for initialization
	void Start () {

		numSections = RoadGamePlayerController.Instance.GetNumSections ();
		waypoints = new Vector3[numSections];

		waypoints = RoadGamePlayerController.Instance.GetWaypoints ();
		Debug.Log ("CarController::Get Waypoints " + nextWaypointIndex);
		WPindexPointer = nextWaypointIndex;

	}

	public void Reset() {
		Debug.Log ("CAR RESET " + this.name);
		WPindexPointer = nextWaypointIndex;
	}

	// Update is called once per frame
	void Update () {
		if (RoadGameController.Instance.GameRunning()) {
			approachWaypoint ();
		}
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
			//print("CAR: hit waypoint " + WPindexPointer);

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
