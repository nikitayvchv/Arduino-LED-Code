### Log for Arduino

#### Nov. 8, 2017
At first, we connected the wires on the board wrong, so it wouldn't work. After we corrected that, we got the Arduino LED code to light up the LED light on the breadboard. At first, the light would stay on unless we pressed down and held down the switch on the board. Then it would turn off and stay that way until we released the switch. However, so far we have been unable to make a switch that would turn the light on and off with just a simple press. Currently, we have a switch that works sometimes, but does not work with perfect accuracy every single time we press the switch. Still trying to figure out how to fix the code to make the switch work. 

#### Nov. 15, 2017
The switch works now. We've managed to get rid of the bounce by using a delay command, but the problem with that is if you press the button super fast, it still bounces a bit.

#### Nov. 22, 2017
Fixed it. No longer bounces. Used millis() instead of a delay command. Added another condition to the if statement inside the loop that controls the switch, so that it won't run if the delay is too short.
