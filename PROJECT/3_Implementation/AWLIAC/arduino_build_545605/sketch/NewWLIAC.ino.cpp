#include <Arduino.h>
#line 1 "B:\\LTTS\\Projects\\Module2\\M2_EmbSys\\PROJECT\\3_Implementation\\AWLIAC\\NewWLIAC\\NewWLIAC.ino"
#include<LiquidCrystal.h>
#define trigger 10
#define echo 11
#define motor 8
#define buzzer 12

LiquidCrystal LCD(A0,A1,A2,A3,A4,A5);
float time=0,distance=0;
int temp=0;

#line 11 "B:\\LTTS\\Projects\\Module2\\M2_EmbSys\\PROJECT\\3_Implementation\\AWLIAC\\NewWLIAC\\NewWLIAC.ino"
void setup();
#line 26 "B:\\LTTS\\Projects\\Module2\\M2_EmbSys\\PROJECT\\3_Implementation\\AWLIAC\\NewWLIAC\\NewWLIAC.ino"
void loop();
#line 11 "B:\\LTTS\\Projects\\Module2\\M2_EmbSys\\PROJECT\\3_Implementation\\AWLIAC\\NewWLIAC\\NewWLIAC.ino"
void setup() {
  // put your setup code here, to run once:
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(motor,OUTPUT);
  pinMode(buzzer,OUTPUT);
  LCD.begin(16, 2);
  LCD.setCursor (0,0);
  LCD.print("Water level");
  LCD.setCursor (0,1);
  LCD.print("Indicator");
  delay(2000);
  LCD.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  time=pulseIn(echo,HIGH);
  distance=time*340/20000;
  LCD.setCursor (0,0);
  LCD.print("Water Space in");
  LCD.setCursor (0,1);
  LCD.print(" Tank is: ");
  LCD.print(distance);
  LCD.print("Cm");
  delay(1000);
  LCD.clear();
  if(distance<40 && temp==0)
  {
    digitalWrite(motor,LOW);
    digitalWrite(buzzer,HIGH);
    
    LCD.setCursor (0,0);
    LCD.print("Water Tank Full");
    LCD.setCursor (0,1);
    LCD.print("Motor Turned OFF");
    LCD.print(millis());
    delay(3000);
    digitalWrite(buzzer,LOW);
    delay(1000);
    LCD.clear();
    temp=1;
    
  }
  else if(distance<40 && temp==1)
  {
    digitalWrite(motor,LOW);
    
    LCD.setCursor(0,0);
    LCD.print("Water Tank Full");
    LCD.setCursor(0,1);
    LCD.print("Motor Turned OFF");
    delay(1000);
    LCD.clear();
  }
  else if(distance>100)
  {
    digitalWrite(motor,HIGH);
    
    LCD.setCursor(0,0);
    LCD.print("LOW Water Level");
    LCD.setCursor(0,1);
    LCD.print("Motor Turned ON");
    delay(1000);
    temp=0;
    LCD.clear();
  }
}

