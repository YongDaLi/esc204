'''
Yong Da Li
Tuesday, March 10, 2020

some code to drive the Bluetooth control
- basically acts acts as the Arduino serial monitor

notes
=====
- TX port is usually the odd numbered one (on Windows)
    - COM11 or COM3
- if servo and Arduino are powered on same 6V battery
    - when servo actuates, pulls power, undervolts battery
    - Arduino stops working
        --> servo only actuates a little bit

    - however when Arduino was using USB power, it was fine
    - FIX = Arduino, servo, stepper all powered on 6*1.5V = 9V
        - Arduino MEGA Vin can take up to 12V, so we're won't kill the Arduino


- DC motors running on 12*1.5V = 18V
    - aboved recommended 12V spec
    - but driving kind of slowly at 12V

    - looks like right wheel isn't touching the ground fully
        --> might need to adjust right side caster wheels
            - shorten caster wheels so DC motor wheels are touching the ground more
'''

import serial
import time
  
port = "COM3"
baud = 9600
  
print("Attempting to open port...")
ser = serial.Serial(port, baud, timeout=1)

    # open the serial port
if ser.isOpen():
     print(ser.name + ' is open...')
  
while True:
    #cmd = raw_input("Enter command or 'exit':")
        # for Python 2
    cmd = input("Enter command or 'exit': ")
        # for Python 3
    if cmd == 'exit':
        ser.close()
        exit()
    else:
        ser.write(bytes(cmd, 'utf-8'))  # UTF-8 encoding works
        out = ser.read()


        print('Receiving...'+ out.decode('utf-8')) # doesn't look right