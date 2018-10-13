Gesture control for laptop using ultrasonic sensors

Using arduino and only two ultrasonic sensors we can build a gesture recognition device to control your pc , laptop.

Using serial communication we can communicate between ultrasonic sensors connected to arduino and computer using a python module called pyautogui to programatically controlling keyboard and pc of your laptop or pc
Components required - Arduino Uno  , 2 ultrasonic sensors , jumper cables
We are mapping distances recorded by two ultrasonic sensors and mesaages to be sent to the serial monitor and we are reading the same message in the python script using serial module

Commands to install required python modules
pip3 install pyautogui
pip3 install time
pip3 install serial
