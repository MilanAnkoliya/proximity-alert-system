The Proximity Alert System utilizes an Arduino UNO, an HC-SR04 ultrasonic sensor, an LED, and a buzzer to detect objects within a specified range. When an object is detected within 15 centimeters, the system activates the LED and buzzer to alert the user.

Theory of Operation

Ultrasonic Sensor (HC-SR04):

The HC-SR04 emits ultrasonic waves through its Trigger pin.
These waves travel through the air and, upon encountering an object, reflect back to the sensor.
The sensor receives the reflected waves through its Echo pin.
By measuring the time taken for the waves to return, the sensor calculates the distance to the object using the formula:

Distance (cm) = (Duration of pulse in microseconds) * 0.0343 / 2

This formula accounts for the speed of sound in air (0.0343 cm/µs) and the round trip of the waves.
Arduino Processing:

The Arduino reads the duration of the pulse from the Echo pin.
It then calculates the distance to the object using the formula above.
If the calculated distance is less than 15 centimeters, the Arduino activates the LED and buzzer.
If the distance is greater than 15 centimeters, it deactivates both the LED and buzzer.
LED and Buzzer Response:

The LED lights up, and the buzzer emits a sound when the object is within the specified range, providing a visual and auditory alert to the user.
This system effectively monitors the proximity of objects and provides immediate feedback, making it suitable for applications like obstacle detection and security systems.
