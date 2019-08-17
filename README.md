# Arduino-to-APM
This project aims to use an arduino to send PWM pulses to APM to change Flight Modes that is normally done using 2.4GHz RC Controller
This code sends a PWM pulse to ArduPilot(APM 2.x) with the sole intention of overriding the input signals to the APM. This is helpful when the Flight mode of APM needs to be overridden to perform certain tasks under specified conditions without modifying any Arducopter codebase.
