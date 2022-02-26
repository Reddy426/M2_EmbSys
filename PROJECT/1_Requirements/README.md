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
