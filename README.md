# GroveSystem

This document describes how to use the Grove sensor platform in combination with Arduino for Isadora. 
You will find in this document general information and a tutorial.

# Tutorial using Grove System with Isadora

To use the Grove System with Isadora you need:

* Isadora software (http://troikatronix.com/download/isadora-download/ or http://troikatronix.com/isa25beta)
* Arduino IDE (https://www.arduino.cc/en/Main/Software)
* Grove Sensors, Grove Shield, an Arduino and a USB cable (https://www.seeedstudio.com/Grove-Starter-Kit-for-Arduino-p-1855.html)
* Isadora Grove start file (groveBase.izz)
* Arduino start code (baseSketch.ino)

**Then follow these steps:**

1. Start by donwloading and installing the Arduino IDE and if you use Windows install the USB drivers 
(http://wiki.seeed.cc/Download_Arduino_and_install_Arduino_driver/)
2. Connect the Arduino to your computer, select the right port and arduino board and upload the "baseSketch.ino"
3. If you open the serial monitor (make sure baud rate is the same as in the arduino code) you wil already see data flashing by. Then close the serial monitor again.
4. Start Isadora and open groveBase.izz
5. In Isadora go to "Communications" -> "Serial port setup..." choose the right port and baud rate.
6. In Isadora go to "Communication" -> "Enable Serial Ports"
7. You should now see data coming into the "Serial port watcher"
8. Explore the Isadora file, read the comments and experiment!

*NOTE: The communication over the Serial port can only be done by Either the Arduino IDE or Isadora, but not both at the same time!
If you want to upload new code to the Arduino you first need to disable the Serial port communication in Isadora (go to "Communication" -> "Enable Serial Ports", this is a toggle) onlly then will you be able to upload new code to the Arduino. In reverse if you have uploaded code to the Arduino mkae sure the "Serial Monitor" is closed and enable the serial communication in Isadora (go to "Communication" -> "Enable Serial Ports", this is a toggle)*


# Sensor Information
There are three different types of Grove sensors/actuators.
* Analog sensors
* Digital sensors & actuators
* I2C sensors & actuators


## Analog sensors

Grove Roterary angle sensor
http://wiki.seeed.cc/Grove-Rotary_Angle_Sensor/
Measure angle of rotary dial

Grove temperature sensor
http://wiki.seeedstudio.com/wiki/Grove_-_Temperature_Sensor
Measure the ambient temperature

Grove Sound Sensor 
http://wiki.seeed.cc/Grove-Sound_Sensor/
Measure the ambient volume

Grove Light sensor 
http://wiki.seeed.cc/Grove-Light_Sensor/
Sense light intensity

## Digital Sensors

Grove touch - input sensor
http://wiki.seeed.cc/Grove-Touch_Sensor/
Measure touch yes/no
Grove hear rate sensor - input sensor
http://wiki.seeed.cc/Grove-Ear-clip_Heart_Rate_Sensor/
Read your heart rate

Grove buzzer - output actuator
http://wiki.seeed.cc/Grove-Buzzer/
Make buzzing noise

Grove Led socket kit - output actuator
http://wiki.seeed.cc/Grove-LED_Socket_Kit/
Turn LED on/off, fade or blink

Grove Relay - output actuator
http://wiki.seeed.cc/Grove-Relay/
Turn a relais on/off, control circuit of high voltage with low voltage

Grove Servo - output actuator
http://wiki.seeed.cc/Grove_Starter_Kit_v3/#grove-servo
Control a small servo. Use with library


## I2C Sensor

Grove Digital Light Sensor 
http://wiki.seeed.cc/Grove-Digital_Light_Sensor/
Sense a selectable light spectrum range

Grove gesture 
https://www.seeedstudio.com/Grove-Gesture-p-2463.html
Gesture recognition sensor. Recognizes up to 9 gestures.

Grove LCD RGB Backlight
http://wiki.seeed.cc/Grove-LCD_RGB_Backlight/
Small two line LCD display

Grove DMX 512
http://wiki.seeed.cc/Grove-DMX512/
Control DMX lights from your computer

### Links:
* http://wiki.seeed.cc/Grove_Starter_Kit_v3/ (description starter kit)
* https://github.com/Seeed-Studio/Sketchbook_Starter_Kit_V2.0 (code for starter kit)
* https://www.arduino.cc/ (to get the Arduino IDE)
* http://www.seeedstudio.com/document/Grove%20Starter%20Kit.pdf (Grove Starter kit tutorial)


