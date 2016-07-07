using UnityEngine;
using System.Collections;

public class GameController : MonoBehaviour {
	public int numberOfObjects = 100;
	public int spawnRange = 50;
		
	public Transform spanObject;

	// Use this for initialization
	void Start () {
		// spawn a bunch of objects
		float x,y,z;

		for (int i = 0; i < numberOfObjects; i++) {
			x = Random.Range(-spawnRange, spawnRange);
			y = Random.Range(0, spawnRange);
			z = Random.Range(-spawnRange, spawnRange);

			Instantiate (spanObject, new Vector3 (x, y, z), Quaternion.identity);
		}
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
