# arduino-motor

This project contains an Arduino program that controls the brightness of LED lights based on the rotation angle of a servo motor. When the servo motor is at 90 degrees or less, LED 1 is on and LED 2 is off. When the servo motor is at more than 90 degrees, LED 2 is on and LED 1 is off.

## Tools Used
- Arduino Uno
- Servo Motor
- 2 x LED
- 2 x 220 Ohm Resistor
- Breadboard
- Jumper Wires

## Wiring Instructions
1. Connect the servo motor's control wire to digital pin 8 on the Arduino.
2. Connect the servo motor's power wire to the 5V pin on the Arduino.
3. Connect the servo motor's ground wire to the GND pin on the Arduino.
4. Connect LED 1's anode (long leg) to digital pin 9 on the Arduino through a 220 Ohm resistor.
5. Connect LED 1's cathode (short leg) to the GND pin on the Arduino.
6. Connect LED 2's anode (long leg) to digital pin 10 on the Arduino through a 220 Ohm resistor.
7. Connect LED 2's cathode (short leg) to the GND pin on the Arduino.