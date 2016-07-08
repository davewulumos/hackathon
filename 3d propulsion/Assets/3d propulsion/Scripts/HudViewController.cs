using UnityEngine;
using System.Collections;

public class HudViewController : MonoBehaviour {

	public static HudViewController Instance;
	public GameObject signalLeft;
	public GameObject signalCenter;
	public GameObject signalRight;
	public GameObject speedText;
	public GameObject messageText;

	public float timeThreshold = 0.5f;

	private int countdown;

	private float leftCountdown = 0;
	private float rightCountdown = 0;
	private float centerCountdown = 0;

	// Use this for initialization
	void Awake () {
		Instance = this;
		signalLeft.SetActive (false);
		signalCenter.SetActive (false);
		signalRight.SetActive (false);
	}

	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (leftCountdown > 0) {
			leftCountdown -= Time.deltaTime;

			if (leftCountdown <= 0) {
				leftCountdown = 0;
				signalLeft.SetActive (false);
			}
		}

		if (rightCountdown > 0) {
			rightCountdown -= Time.deltaTime;

			if (rightCountdown <= 0) {
				rightCountdown = 0;
				signalRight.SetActive (false);
			}
		}

		if (centerCountdown > 0) {
			centerCountdown -= Time.deltaTime;

			if (centerCountdown <= 0) {
				centerCountdown = 0;
				signalCenter.SetActive (false);
			}
		}
	}

	public void showSignal(string position) {

		if (position == "l") {
			signalLeft.SetActive (true);
			leftCountdown = timeThreshold;
		} else if (position == "r") {
			signalRight.SetActive (true);
			rightCountdown = timeThreshold;
		} else if (position == "c") {
			signalCenter.SetActive (true);
			centerCountdown = timeThreshold;
		}
	}

	public void SetSpeed(int speed) {
		string txt = speed + " mph";
		speedText.GetComponentInChildren<TextMesh>().text = txt;
	}

	public void EnableStartMessage(bool enabled) {
		messageText.SetActive (enabled);
	}


}
