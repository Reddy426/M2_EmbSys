---

## 4. Test Plans

### 4.1 High level test plans

|RID |Discreption |Expected O/p |Actual O/p |Pass/Fail |
|----|----|----|----|----|
|HLT1 |Ultra sonic sensor |Calculate the Distance |Calculate the distance |Pass |
|HLT2 |Buzzer(Led Used) When water Tank is Full |It will make sound(Led will glow) |It will make sound(Led will glow) |Pass |
|HLT3 |When water Tank is Full |Motor gets turned OFF|Motor gets turned OFF |Pass | 
|HLT4 |Water Level is Low |Motor gets turned ON |Motor gets turned ON |Pass |
|HLT5 |Water Level is Low |It will remain silent(Led will not glow) |It will remain silent(Led will not glow) |Pass |
|HLT6 |LCD |Displays the Distance and Water level |Displays the Distance and Water level |Pass |

### 4.2 Low level test plans

|RID |Discreption |Expected O/p |Actual O/p |Pass/Fail |
|----|----|----|----|----|
|LLT1 |Ultra sonic sensor Calculate the Distance Example 14.23cm |Water tank Full & Motor turned off  |Water tank Full & Motor turned off |Pass |
|LLT2 |Ultra sonic sensor Calculate the Distance Example 374.32cm |LOW Water level & Motor turned on  |LOW Water level & Motor turned on |Pass |


---


## OUTPUT

- Distance < 40

![Low distance](https://user-images.githubusercontent.com/98537406/156934666-b29cc5ae-83f4-431f-a4db-11f2870d607e.PNG)


- Water level is HIGH (Full) & Motor is OFF at distance < 40

![Motor off](https://user-images.githubusercontent.com/98537406/156934737-39cc898c-54b3-46ad-9e4a-f3759ca02f8c.PNG)


- Distance > 100 

![Distance is more](https://user-images.githubusercontent.com/98537406/156934770-96f476af-000d-42a0-ba6f-cc601129bdff.PNG)


- Water level is LOW  & Motor is ON at distance > 100

![Motor on](https://user-images.githubusercontent.com/98537406/156934810-81f27cac-1ad4-46d9-8c72-f684875b515b.PNG)
