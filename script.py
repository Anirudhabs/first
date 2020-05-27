# Python script

import serial
import time
import pyautogui

ArduinoSerial = serial.Serial('/dev/ttyACM1',9600)
time.sleep()

while 1:
     out = str (ArduinoSerial.readline())
    print (out)

    if 'Play/Pause' in out:
        pyautogui.typewrite(['space'], 0.2)

    if '3' in out:
        pyautogui.scroll(50)

    if '4' in out:
        pyautogui.scroll(-50)

    if '1' in out:
        pyautogui.hotkey('ctrl', '+')

    if '2' in out:
        pyautogui.hotkey('ctrl', '-')
