Gesture control for laptop using ultrasonic sensors

Using arduino and only two ultrasonic sensors we can build a gesture recognition device to control pc, laptop.

Using serial communication communication between ultrasonic sensors connected to arduino and computer using a python module called pyautogui( used to programatically controlling keyboard and mouse) we can control the PC
Components required - Arduino Uno  , 2 ultrasonic sensors , jumper cables
We are mapping distances recorded by two ultrasonic sensors and mesaages to be sent to the serial monitor and we are reading the same message in the python script using serial module.

Install requirements and run the script to start using.

Gestures -

1. Hold two hands at equidistance in front the sensors to pause or play a video.
2. Hold right hand from a distance of the right sensor and move left hand forward and backward to zoom in and zoom out.
3. Hold left hand from a distance of the left sensor and move right hand forward and backward to scroll up and scroll down.
