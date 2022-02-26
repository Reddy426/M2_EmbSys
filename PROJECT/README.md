# Automatic Water level indicator & control

# Table of contents
1. About Automatic water level indicator & control
    * [1.1 Introduction](#11-introduction)
    * [1.2 working of the system](#12-working-of-the-system)
    * [1.3 SWOT Analysis](#13-swot-analysis)
    * [1.4 4W & 1H](#14-4w--1h)
2. Requirements
    * [2.1 HIGH Level requirements](#21-high-level-requirements)
    * [2.2 LOW Level requirements](#22-low-level-requirements)
3. Block diagram and Explanation
    * [3.1 Flow chart](#31-flow-chart)
    * [3.2 Block Diagram](#32-block-diagram)
    * [3.3 components used](#33-componenets-used)
    * [3.4 Explanation of components](#34-explanation-of-components)
4. Test plans
   * [4.1 High level test plan](#41-high-level-test-plan)
   * [4.2 Low lwvwl test plan](#42-low-level-test-plan)
6. [Advantages](#advantages)
7. [Applications](#applications)

---


# 1. About Automatic water level indicator & control
## 1.1 Introduction
---
* Water is the important natural resource that should be efficiently used. Our project `Automatic Water Level indicator & Controller` uses the `Arduino` and `Ultrasonic senser`. The Basic idea of the project is to ensure the proper use of water and reduce the wastage of water.
* This basic idea can be implemented in many fields and purposes such as irrigation in agriculture land, water pump controlling water usage monitoring etc
 * Automatic Water level indicator and controller, the name itself indicates that an electronic device or circuit kit used for controlling the water level can be termed as a Automatic water level indicator & controller.
 * It is difficult to know the level of water in the overhead tank such that wastage of water can happen frequently.
 *To conserve water, avoid overflow of water in the overhead tank which may cause loss of water, loss of electrical power, etc.,.
 *Thus, an ultrasonic water level indicator & controller using `Arduino` is an innovative electronics project application for controlling water level.

* Automatic Water Level indicator Controller using the Arduino project will help in automatically controlling the water motor by sensing the water level in a tank.
* This article explains how to detect and control the water level in an overhead tank or any other container.
* This system monitors the water level of the tank and automatically switches ON the motor whenever the tank is empty.
---
## 1.2 Working of the System
    * In this Arduino based automatic water level indicator and controller project we are going to measure the water level by using ultrasonic sensors.
    * Basic principal of ultrasonic distance measurement is based on ECHO.
    * When sound waves are transmitted in environment then they return back to the origin as ECHO after striking on any obstacle.
    * So we have to only calculate its traveling time of both sounds means outgoing time and returning time to origin after striking on any obstacle.
    * And after some calculation we can get a result that is the distance.
    * This concept is used in our water controller project where the water motor pump is automatically turned on when water level in the tank becomes low.
---


# 1.3 SWOT Analysis

![SWOT](https://user-images.githubusercontent.com/98537406/155819233-2f1a0379-3d83-4d67-87e4-a3b72dd8a1ac.png)




[Back to Contents](#table-of-contents)

---

# 1.4 4W & 1H
 * What:
      *  Automatic water level indicator & controller is an module that was created to automatically control a motor, which helps to ensure a constant reserve of water in a storage tank.
      * These Automatic water level indicator & controllers are used to automatically fill the over-head tank when it starts or has become empty as well as monitor the water level in it.
---
 * Why:
    * A water level controller helps save money by limiting the waste of water and electricity.
    * These devices accurately regulate how much energy is used to protect against any unnecessary water/electricity usage.
---
* Where:
    * It can be installed in homes, hotels, and hospitals.The power used by this controller is low and negligible.
    * It can be installed in metro cities where the drinking water is the only water used for all purposes, which keeps the drinking water from being wasted.
---
* When:
    *Automatic water level indicator & controllers switch the motor on whenever the water level drops below a certain level and shuts the motor off when the water rises well above a fixed level.
---
* How:
    * Implementing the simulation by using `SimulIDE` software and  `Arduino IDE` sourse Code.
---

[Back to Contents](#table-of-contents)

---
## 2. Requirements

### 2.1 HIGH Level requirements

 |RID |Discreption |
 |---|---|
 |HLR1 |Water level Indicator & controller shall be automated. |
 |HLR2 |System shall show the status of the water level in the tank. |
 |HLR3 | System shall  switch ON the motor |
 |HLR3 |System shall switch OFF the motor|

### 2.2 LOW Level requirements


 |RID |Discreption |
 |---|---|
 |LLR1 |Ultrasonic sensor shall calculate the Level of the water in overhead tank |
 |LLR2 | LCD shall display the Water level and Motor status. |
 |LLR3 | Motor shall be switched ON, on the following condition : * When the water level of the overhead tank is lower than the lowest sense level. |
 |LLR4 | Motor shall be switched OFF,  on the following condition: * When the water level of the overhead tank reaches the highest sense level. |

---

[Back to Contents](#table-of-contents)

---


# 3. Block diagram and Explanation
## 3.1 Flow chart

![AWLCFC](https://user-images.githubusercontent.com/98537406/155820422-ae0ec75d-fe6d-4d64-939a-be945e17d177.png)


## 3.2 Block Diagram

![AWLC](https://user-images.githubusercontent.com/98537406/155814991-eab44181-451e-4cae-9b43-74e7fa88922a.png)

---
### 3.3 Componenets used
- Arduino.
- Ultrasonic Sensor.
- LCD.
- BJT.
- Switch.
- LED.
- DC motor.

---

### Software used
    - Simulation (`SimulIDE`)
    - Code (`Arduino IDE`)

### 3.4 Explanation of components
1. `Arduino:` 
    - Arduino is an open-source electronics platform based on easy-to-use hardware and software.
    - Arduino boards are able to read inputs - light on a sensor, a finger on a button, or a Twitter message - and turn it into an output - activating a motor, turning on an LED, publishing something online.
    - You can tell your board what to do by sending a set of instructions to the microcontroller on the board.
    - To do so you use the Arduino programming language (based on Wiring), and the Arduino Software (IDE), based on Processing.

2. `Ultrasonic Sensor:`
    - An ultrasonic Sensor is an electronic device that measures the distance of a target object by emitting ultrasonic sound wave, and converts the reflected sound into an electical signal.
    - It is economical sensor provides 2.5cm to 400cm of non-contact measurement funtionality with a ranging accuracy that can reach upto 3mm, and it includes an ultrasonic trasmitter, a receiver and a control circuit.

3. `LCD:`
    - LCD csreen is a flat-panel display, electronic visual display that uses the light-modulating properties of liquid crystal and LCD's are available to display arbitrary images, Preset words, digits and 7-segment dispalys.

4. `BJT:`
    - BJT is a Bipolar Junction Transistor is a three-terminal semiconductor device that consists of two p-n junctions which are able to amplify or magnify a signal.
    - it is a current controlled device.
    - The three-terminals of BJT are base, the collector and the emitter.
    - It does require an external source of DC power supply to carry out the amplification process.

5. `Switch:` 
    - It is a small
    control for an electrial device used to make or break a connection in a circuit.

6. `LED:`
    - LED is a light-emitting diode.
    - It is a semi-conductor diode that emits light when conducting current.

7. `DC motor:`
    - A DC motor is a class of electrical motors that converts direct current electrical energy into mechanical energy.

---


[Back to Contents](#table-of-contents)

---

## 4. Test Plans

### 4.1 High level test plans


### 4.2 Low level test plans


---

## 5. Advantages
- Easy installation.
- Low maintenance.
- Compact and elegant design.
- Users can control the required level of water in over head tank. 
- Avoids wastage of water from tanks.
- It can maintain exact preset water levels.
- Being automatic saves man power.
---
## 6. Applications
- Used in buildings where the manual monitoring is difficult.
- Used in industries to control the water level and in chemical mixing etc.
- It can be installed in metro cities where the drinking water is the only water used for all purposes which keeps the drinking water from being wasted. 
- Fuel tank level gauging.
- Oil tank level control.
- Pool water level control.

---

## Reference
- [Study1](https://www.thehindu.com/news/cities/Delhi/40-per-cent-of-water-supply-gets-wasted-Study/article16836247.ece )
- [Study2](https://www.ijraset.com/fileserve.php?FID=14330)

---
## Neaws on wastage of water
[over-head-tank-water-wastage](https://www.deccanherald.com/city/bwssb-targets-overhead-tank-water-wastage-in-new-move-773145.html)

---

[Back to Contents](#table-of-contents)
