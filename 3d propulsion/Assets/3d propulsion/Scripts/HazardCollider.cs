using UnityEngine;
using System.Collections;

public class HazardCollider : MonoBehaviour {

	public string position = "c";

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter(Collider other) {
		
		if (other.name == "PlayerPlatform") {
			//Debug.Log ("!!!HAZZARD COLLIDER :ON TRIGGER " + other.name);

			HudViewController.Instance.showSignal (position);
		}
			
	}
}
