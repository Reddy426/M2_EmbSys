# CASE STUDY 1 [Low Level Application]
## Vending Machine: -

![CASESTUDY1](https://user-images.githubusercontent.com/98537406/154840002-83c7c161-f23a-4695-afa8-3ab9570ed1a5.png)

## Explanation: -

1.	Power supply unit: -
-	From the main supply AC voltage is continuously supplied to the vending machine i.e., 230v AC.
-	There is a rectifier in this unit, which converts AC voltage into DC voltage, and this voltage is supplied to a voltage regulator.
-	Voltage regulator converts the supplied voltage to a constant voltage of 5v.
-	The 5v supply is supplied to the microcontroller to operate.

2.	Coin Detection Box: -
-	In case of valid coin detection, a signal is sent to the internal circuitry which also consists of a Microcontroller.
-	The microcontroller now operates the motors to dispense a cola bottle in case of valid coin.
-	If the coin is not valid then it gets rejected.

3.	DAC: -
- As the microcontroller gives the digital data as output, the output signal must give to the Relay drive, but Relay drive cannot understand the digital data so this digital data is converted into Analog signal by using the DAC (Digital to Analog Converter) and then given as input to the relay drive to operate.

4.	Relay Driver: -
- A Relay driver is a circuit which can drive, or operate, a relay so that it can function appropriately in a circuit.
-	The relay driver can then operate a relay for switching operation in the circuit which can open or close, according to the needs of the circuit and it drives the motor.

5.	Motor: -
-	Relay is used to drive the motor. 
-	When the product required is selected and coin is inserted and if accepted by the coin detection box a pulse is given to the Microcontroller and the motor is driven.
-	Motor in-turn drives the spring attached to it. The spring rotates the product, which then slides out of the box is given as output.


# CASE STUDY 2 [Medium Level Application]

## Home Automation: -

![Home_Automation](https://user-images.githubusercontent.com/98537406/154852675-2fe8bef2-dc2b-4f8b-bd2d-b110ded9a26c.png)



## Explanation:-

1.	Temperature Sensor: -
-	Temperature sensors measure the atmospheric temperature and send the data to home automation system (Microcontroller).
-	Home automation system which controls the heating, ventilation, and air conditioning (HV AC).

2.	PIR Sensor: -
-	A PIR Sensor is utilized to identify the infrared radiation from the warm object.
-	As it comprises of sensor which start changes in their temperature (because of occurrence infrared radiation) into electric flag called PYRO ELECTRIC SENSORS.
-	It produces an electric charge when infrared light strikes a gem.
-	Like this, PIR Sensor recognize an encompassing attribute (Person) moving around roughly just inside 10m from the PIR Sensor.

3.	Gas Sensor: -
-	Gas sensor is a device which sense the presence of various gases within an area, usually as part of a safety system.
-	This type of devices is used to detect a gas leak and interface with a microcontroller so a process can be automatically shut down.
-	A gas sensor can also sound an alarm to operators in the area where the leak is occurring, giving them the opportunity to leave the area.

4.	Light Sensor: -
-	Light intensity data can help you to automate your lighting system to switch it on or off.
-	 Switching off light automatically with your home automation system, where light intensity is high enough to see, will save energy. 
-	You can also create your own luminance data table and use it to automate your application to regulate when to switch lights on or off.

5.	Relay: -
-	Relays are a fundamental device for switching an electrical circuit on or off, much like a toggle switch or a limit switch. 
-	But a relay is operated based on an electrical control signal obtained from Sensors as opposed to a toggle switch that is operated by a microcontroller, or by equipment contact.

6.	Bluetooth model: -
-	This module enables you to wireless transmit & receive serial data.
-	 It is a drop-in replacement for wired serial connections allowing transparent two way data communication. 
-	You can simply use it for serial port replacement to establish connection between MCU



