using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControllerX : MonoBehaviour
{
    public float speed;
    public float rotationSpeed;
    public float verticalInput;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void FixedUpdate()
    {
        // get the user's vertical input
        //if up arrow is pressed it will return 1
        //if down arrow is pressed it will return -1
        //if no arrow is pressed it will return 0
        verticalInput = Input.GetAxis("Vertical");

        // move the plane forward at a constant rate
        //In order to fix the movement we simply change it to forward
        //In relation to the speed we multiply Time.deltaTime in order for the plane to move based on seconds and not frames
        //Now it will advance the speed every second, and not every frame which was the problem.
        transform.Translate(Vector3.forward * speed * Time.deltaTime);

        // tilt the plane up/down based on up/down arrow keys
        //In order to ensure the user has a say we must include his input into the rotation
        //Therefore we multiply the verticalInput, if the user is not pressing a key the value of verticalInput is 0, canceling all rotation
        transform.Rotate(Vector3.right * rotationSpeed * Time.deltaTime * verticalInput);
    }
}
