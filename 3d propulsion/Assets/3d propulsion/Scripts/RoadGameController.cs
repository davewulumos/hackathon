using UnityEngine;
using System.Collections;


public class RoadGameController : MonoBehaviour {
	
	public float startWait;
	public GameObject hazards;
	public static RoadGameController Instance;

	private Vector3[] initialCarVectors;
	private Vector3[] initialCarRotation;

	private string state;

	void Awake() {
		SavePositions ();
		state = "waitForStart";

		Debug.Log ("RoadGameContoller::INIT");
		Instance = this;
	}

	void Start() {
		
	}

	public void GameOver() {
		Debug.Log ("GAME OVER");
		state = "waitForReplay";
		HudViewController.Instance.EnableStartMessage (true);
	}

	public bool GameRunning() {
		return (state == "playing");
	}

	void StartGame() {
		RoadGamePlayerController.Instance.StartGame ();
		HudViewController.Instance.EnableStartMessage (false);
		state = "playing";
		
	}

	void RestartGame() {
		Debug.Log ("RESTART GAME");
		RestorePositions ();
		RoadGamePlayerController.Instance.Reset ();
		StartGame ();
	}

	void SavePositions() {
		int i = 0;

		initialCarVectors = new Vector3[20];
		initialCarRotation = new Vector3[20];

		//foreach (Transform child in hazards.transform)
		foreach (Transform child in hazards.transform)
		{
			if (child.CompareTag ("Car")) {
				initialCarVectors [i] = new Vector3 (child.transform.position.x, child.transform.position.y, child.transform.position.z);
				initialCarRotation [i] = new Vector3 (child.transform.eulerAngles.x, child.transform.eulerAngles.y, child.transform.eulerAngles.z);
				i++;
				Debug.Log ("SavePositions:: " + child.name);
			}
		}

	}

	void RestorePositions() {

		int i = 0;
		foreach (Transform child in hazards.transform)
		{
			if (child.CompareTag ("Car")) {
				child.transform.position = initialCarVectors [i];
				child.transform.eulerAngles = initialCarRotation [i];
				i++;
			}
		}

		GameObject[] cars = GameObject.FindGameObjectsWithTag ("Car");
		foreach (GameObject car in cars) {
			Debug.Log("CONTROLLER:RESTORE CARS");
			if (car.CompareTag ("Car")) {
				CarController other = (CarController)car.GetComponent (typeof(CarController));
				other.Reset ();
			}
		}
	}

	// Update is called once per frame
	void Update () {

		bool buttonPressed = Cardboard.SDK.Triggered;

		if (state == "waitForStart" && buttonPressed) {
			StartGame();
		} 
		if (state == "waitForReplay" && buttonPressed) {
			RestartGame();
		}
	}
}
