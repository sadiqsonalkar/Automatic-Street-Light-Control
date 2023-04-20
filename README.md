# Automatic-Street-Light-Control
My project is Automatic Street Light Control. 
With the help of an IR Sensor, we will control the street light. 
So when any person is walking the street light above the person will automatically turn on because of the sensor it triggered. 
I will simulate my project using Proteus and for the coding, I will be using Keil.
There are 3 sensors in our project. 
If you want, we can increase the number of parking slots by adding a few more IR sensors and modifying the code accordingly.

# Component Used:
Micro Controller (AT89C51),
Button,
Relay (5V),
AC Voltage Source,
Ground,
Transistor (BC547),
Power,
Lamp

# Working of the project
Across each sensor, we will place a load i.e. lamp.
Relay connection will be done on MCU using port P2.
And for the sensor connection to MCU, we will use port P1.
Initially, all the sensors and the load will be 0.
We will run a while loop infinitely so that one condition is met.
Then we tried all the conditions i.e. when all sensors are off.
When only 1 sensor is on, When 2 sensors are on, and lastly when all sensors are on.
Then we will compile and generate the HEX Code file.
3 relays are used to drive the electrical load.
AC Source will generate Alternating Current.
We have 1 sensor across each relay.
One end of the sensor will be connected to MCU and the other end will be connected to Power.
We will use a transistor as an interface between the relays and MCU.
We will connect the collector of the transistor to the relay, the base to MCU, and the emitter to the ground.
One end of a lamp will be connected to AC Source and another end to the relay.
The relay should be 5V because MCU can't handle other Voltage Relay.

# Circuit Diagram:
![Screenshot 2023-04-06 161939](https://user-images.githubusercontent.com/43111400/232416091-6a680bde-8733-445b-af67-ff38c737b746.png)

# Source Code:
![Screenshot 2023-04-17 130657](https://user-images.githubusercontent.com/43111400/232417049-94046033-1be4-4e20-8f70-3ad27d0d5396.png)
![Screenshot 2023-04-17 130706](https://user-images.githubusercontent.com/43111400/232417171-078b1c09-320d-4940-a0f5-12b5cd66584d.png)

# I have added all the screenshot, the Powerpoint Presentation, the synopsis and all the files.
