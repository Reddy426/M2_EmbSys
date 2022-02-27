# 1. About Automatic water level indicator & control
## 1.1 Abstract
   
   Most of the people in reidental areas face the problem of running out of water and overflow of water in water tank due to excess supply of water. It becomes difficult for users to judge the level of water in water tanks. When the pump is turned ON, users will not realise that the water tank is filled, Which may result in overflow. Waater level indicator and controller system is used to sort out the issues associated with water tank. It is also possible to check the level of the water using sensor so that whenever the water goes below, Pump gets turned ON automatically. Also when there is overflow of water in water tank it uses sensor to detect the water level so that if the water level goes above, the pump gets turned OFF automaticlly. This system prevents wastage of water.

## 1.2 Introduction
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
## 1.3 Working of the System
    * In this Arduino based automatic water level indicator and controller project we are going to measure the water level by using ultrasonic sensors.
    * Basic principal of ultrasonic distance measurement is based on ECHO.
    * When sound waves are transmitted in environment then they return back to the origin as ECHO after striking on any obstacle.
    * So we have to only calculate its traveling time of both sounds means outgoing time and returning time to origin after striking on any obstacle.
    * And after some calculation we can get a result that is the distance.
    * This concept is used in our water controller project where the water motor pump is automatically turned on when water level in the tank becomes low.
---


# 1.4 SWOT Analysis

![SWOT](https://user-images.githubusercontent.com/98537406/155819233-2f1a0379-3d83-4d67-87e4-a3b72dd8a1ac.png)




[Back to Contents](#table-of-contents)

---

# 1.5 4W & 1H
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
