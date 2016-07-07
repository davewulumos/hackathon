using UnityEngine;
using System.Collections;


public class RoadGameController : MonoBehaviour {
	
	public float startWait;
	public float waveWait;
	public float spawnWait;
	public GameObject Hazard;
	public int hazardCount;

	// Use this for initialization
	void Start () {
		StartCoroutine (SpawnWaves ());
	}

	IEnumerator SpawnWaves ()
	{
		yield return new WaitForSeconds (startWait);
		while (true)
			//if (!hasSpawned)
		{
			for (int i = 0; i < hazardCount; i++)
			{
				GameObject hazard = Hazard;
				int lane = Random.Range (0,3);
				//Debug.Log (lane);
				Vector3 spawnPosition = new Vector3 ( lane*3-3, 2, 200);

				Instantiate (hazard, spawnPosition, Quaternion.identity);
				yield return new WaitForSeconds (spawnWait);
			}
			yield return new WaitForSeconds (waveWait);

		
		}
	}

	// Update is called once per frame
	void Update () {
	
	}
}
