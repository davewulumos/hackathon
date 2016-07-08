using UnityEngine;
using System.Collections;

public class RoadGamePlayerController : MonoBehaviour {
	public GameObject[] sectionMarkers;
	public float rotationDamping;
	public float maxSpeed;
	public float acceleration = 1;

	public int rotationSensitivity = 3;
	public float maxOffset = 4f;
	public GameObject sectionMarkerObject;
	public int endSection;

	private CardboardHead head;
	private Rigidbody rb;
	private GameObject cardboardMain;

	private float xOffset;

	private Vector3 waypoint;
	private Vector3[] waypoints;
	private int WPindexPointer;

	private int numSections;
	private bool reachedNextWaypoint;
	private bool endOfRoad = false;
	private float speed = 0f;
	private bool gameStarted = false;
	private Vector3 initialCarVector;
	private Vector3 initialCarRotation;
	private Vector3 initialCardboardVector;

	public static RoadGamePlayerController Instance;

	// Use this for initialization
	void initialize () {
		Debug.Log ("Player::RESET");
		endOfRoad = false;
		speed = 0f;
		gameStarted = false;
		WPindexPointer = 0;

		transform.position = initialCarVector;
		transform.eulerAngles = initialCarRotation;

		cardboardMain.transform.position = initialCarVector;

	}

	void Awake() {
		Instance = this;

		head = Cardboard.SDK.GetComponentInChildren<CardboardHead> ();
		rb = Cardboard.SDK.GetComponentInChildren<Rigidbody> ();
		cardboardMain = GameObject.FindGameObjectWithTag ("CardboardMain");

		waypoints = new Vector3[100];

		int i = 0;
		foreach (Transform child in sectionMarkerObject.transform)
		{
			waypoints [i] = child.transform.position;
			i++;
		}

		numSections = waypoints.Length;

		/*
		for (int i = 0; i < numSections; i++) {
			waypoints [i] = sectionMarkers [i].transform.position;
		}*/
		WPindexPointer = 0;


		initialCarVector = new Vector3 (transform.position.x, transform.position.y, transform.position.z);
		//Vector3 copyRotation = new Vector3(transform.eulerAngles.x, transform.eulerAngles.y, transform.eulerAngles.z);
		initialCarRotation = new Vector3(transform.eulerAngles.x, transform.eulerAngles.y, transform.eulerAngles.z); 

		initialCardboardVector = new Vector3 (cardboardMain.transform.position.x, cardboardMain.transform.position.y, cardboardMain.transform.position.z);
	}

	// Update is called once per frame
	void Update () {

		if (gameStarted) {
			if (endOfRoad == false) {
				speed = speed + Time.deltaTime * acceleration;
			} else {
				speed = speed + Time.deltaTime * -10;
			}
			speed = Mathf.Clamp (speed, 0, maxSpeed);
			approachWaypoint ();
			cardboardSteering ();
		}
		HudViewController.Instance.SetSpeed ( Mathf.RoundToInt(speed * 3) );

		if (endOfRoad == true && speed == 0) {
			RoadGameController.Instance.GameOver ();
		}
	}

	public void StartGame() {
		Debug.Log ("PLAYER::StartGame");
		gameStarted = true;
	}

	public void Reset() {
		initialize ();
	}

	void cardboardSteering() {
		Vector3 rot = head.transform.eulerAngles;
		Vector3 position = rb.transform.position;
		float dx = 0;

		float threshold1 = 360 - rotationSensitivity;
		float threshold2 = rotationSensitivity;

		if (rot.z < threshold1 && rot.z > 270) {
			dx = Mathf.Clamp(rot.z - threshold1, -5, 0);


		} else if (rot.z > threshold2 && rot.z < 45) {
			// move right
			dx = Mathf.Clamp(rot.z - threshold2, 0, 5);
		}

		float dxScaled = dx / 40;

		Vector3 currentPosition = cardboardMain.transform.localPosition;
		//Debug.Log (rot.z + " " + dx);
		cardboardMain.transform.localPosition = new Vector3 (Mathf.Clamp(currentPosition.x-dxScaled, -maxOffset, maxOffset), currentPosition.y, currentPosition.z);

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

			//print("PLAYER: hit waypoint " + WPindexPointer);

			if (WPindexPointer == endSection) {
				endOfRoad = true;
			}

			reachedNextWaypoint = true;
			if (WPindexPointer < numSections) {
				WPindexPointer++;
			}

		
		} else if (reachedNextWaypoint == true) {
			//print("exiting waypoint " + WPindexPointer);
			reachedNextWaypoint = false;
		}

	}

	public Vector3[] GetWaypoints() {
		Debug.Log ("GetWayPoints ; " + waypoints.Length);
		return waypoints;
	}

	public int GetNumSections() {
		return numSections;
	}

	public void StopCar() {
		speed = 0f;
	}
	public void SlowCar() {
		speed = Mathf.Clamp (speed - 15, 0, maxSpeed);
	}


}
