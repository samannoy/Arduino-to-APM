////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////Arduino to APM Interfacing/////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////Author: Samannoy Ghosh//////////////////////////////////////////////////////////////////////////////////////////
////////Version:1.01////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*
 * This code sends a PWM pulse to ArduPilot(APM 2.x) with the sole
 * intention of overriding the input signals to the APM. This is 
 * helpful when the Flight mode of APM needs to be overridden to
 * perform certain tasks under specified conditions without modifying
 * any Arducopter codebase.
 * 
 * Contact me at prince.sam1495@gmail.com for any issues or suggestions.
 * 
 * 
 */

#include <Servo.h>

Servo ARDUINO_TO_FC;
int PWM_range=1500,PWM_range2=1800;

void setup() {
  // Set the baud rate to 115200
 Serial.begin(115200);
 ARDUINO_TO_FC.attach(8); //Arduino Digital Pin 8 has been used to connect to APM Input
}
void loop() {
 /*
  * User defined conditions and functions
  * Let user use some conditions to decide what flight mode to use
  * Note Mission Planner-->Initial Setup-->Mandatory-->Flight Modes for
  * the PWM ranges in which each of the 6 Possible Flight Modes fall.
  * Set the Flight Modes that you want to use in Mission Planner and
  * note down its corresponding PWM ranges. Use the same to change the 
  * value of PWM_range variable
  */

//if (something happens)
ARDUINO_TO_FC.writeMicroseconds(PWM_range);// I have set PWM_range=1500 to trigger Loiter
//else
ARDUINO_TO_FC.writeMicroseconds(PWM_range2);// I have set PWM_range2=1800 to trigger Auto

}
