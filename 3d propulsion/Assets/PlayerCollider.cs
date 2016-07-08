using UnityEngine;
using System.Collections;

public class PlayerCollider : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter(Collider other) {
		//Debug.Log ("!!!PLAYER: ON TRIGGER " + other.name);
		if (other.CompareTag ("Car")) {
			Debug.Log ("HIT CAR");
			RoadGamePlayerController.Instance.StopCar ();
		} else if (other.CompareTag ("RoadHazzard")) {
			Debug.Log ("HIT HAZZARDS");
			RoadGamePlayerController.Instance.SlowCar ();
		}
	}
}
