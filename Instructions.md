*Greg Reynolds Jan. 2017*

**[More Info Here](https://sites.google.com/a/ocdsb.ca/a-y-jackson-ics4u/unit-2-micro-controlers/1-introduction-to-microcontrolers)**

It is the rare electrical item that is any more complex than a hair dryer that doesn’t have a small microcontroller in it. Even an electric toothbrush, with its timer, has a micro in it. So do stoves and refrigerators. Automobiles have probably over 20 micros embedded in components like the fuel injector, speed controller, entertainment centre, tire pressure monitor, and so on. None of these items appear to be a computer since there is no mouse, screen, or keyboard. The computer is embedded in the item.

All these micros must have software written for them. This is one of the reasons that it is projected that there will be a real shortage of skilled programmers.

The purpose of this course is to introduce you to these microcontrollers. We will mount a Arduino Nano controller on a prototyping board along with a pushbutton switch and an LED. Then we will write a program to transfer the status of the switch to the LED. Basically, we will producing a very complicated light switch.
Sounds boringly simple, but even here there are hidden hardware problems which will have to be overcome with software,

One of the many attractions of solving hardware problems with software is the hardware must be put into every produce made. Not good for keeping the price down. Software is paid for once. After that it is “free” to put in a product. 


The Arduino Nano
This is little printed circuit board with 25 components. Most important to the user is the Atmel ATmega168 microcontroller and a serial to USB chip that allows us to communicate with the microcontroller (See the User Manual in the information package) 


The Prototyping Board
In engineering, the first time a thing is made, it is usually referred to as the prototype.
In electronics, the prototype is the components in the design connected together to try out the design and see if it works. These boards provide a relatively convenient way to connect components together. There is an array square holes on 0.1” spacing. Under the holes are U shaped channels that run under groups of holes. Pushing a wire into a hole drives it into the channel. Another wire driven into another hole that has the same channel under it connects to wires. A drawing in the info packet shows what holes have common channels.
Connected holes run the whole length of the board along the sides. These are usual connected to the binding posts at the end of the board. This allows power and ground to be distributed to other holes on the board. By convention the red post is power and the black post is ground. 

The Switch
The legs on the PB (push button) switch are on a metric spacing so they do not line up exactly with the holes in the protoboards. Some careful bending and fiddling with long nosed pliers might be required.


The LED
LED only work provided the current flows in the right direction. The negative terminal is identified by a small flat portion on the body of the LED. Look carefully.


The Resistor
A resistor must be put into line with the LED. The reason for this will be demonstrated by examining the data sheets for both the LED and the micro, and the value of the resistor will be calculated using Ohm’s Law.

The Arduino IDE (Integrated Development Environment)
One of the reasons for the popularity of the Arduino series of microcontroller boards is a very friendly (Compared with other IDEs) programming interface. This IDE must be installed on the PC that you will use. As well, the USB driver for the USB port on the Nano must also be installed on the PC.
The Arduino Programmer’s Notebook should also be installed for your use. You are encouraged to study this notebook in detail at home. It will give you a very good overview of what you can make the Nano do.

The Steps We Will Follow
Go to Mrs. Kirby’s directory on the school library and download the following onto the D drive of the PC you are using.
Arduino IDE
Arduino directory,
CH341SER driver
Arduino Notebook
Install the CH341 driver by opening the directory and double clicking SETUP. 
Now plug the Nano into an USB port. Open the PC’s Control Panel, go to Drivers and Printers. 
At the bottom, under Unspecified, should be USB-SERIAL CH340 (COMx). 
Note the COM number. This number can change each time the Nano is plugged in again.
Open the IDE. Under the pulldown menu File open Preferences. Using the Browse button,change the Sketchbook location to the Arduino directory you put on the D drive.
Pull down the Tools menu. Change the Board to Arduino Nano. Change the Port to the COM number you found.
Pull down File, Examples, Basics, Blink. Confirm the connection by uploading Blink that makes the LED on the Nano blink. Alter Blink to change to blink rate.
Install the Nano, LED, resistor, push button switch, and connecting wires as show in the information package. 
Examine the program Simple_PB_LED under File, Sketchbook, AY Proto Board. Load into the Nano. The switch should control the state of the LED.
Write a program to toggle the LED with the switch. In other words, press once to change the state of the LED.
Carefully examine the operation of this program.
