#include<LiquidCrystal.h>
#define trigger 10 //Pin on the arduino where the trigger pin is connected.
#define echo 11 //Pin on the arduino where the Echo pin is connected.
#define motor 8 //Pin on the arduino where the Motor pin is connected.
#define buzzer 12 //Pin on the arduino where the Buzzer(Led used) pin is connected.

LiquidCrystal LCD(A0,A1,A2,A3,A4,A5);////Pin on the arduino where the Rs,En,D4,D5,D6,D7 Pins are  connected
float time=0,distance=0;
int temp=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigger,OUTPUT);//Sets Trigger pin as output.
  pinMode(echo,INPUT);//Sets Echo pin as input.
  pinMode(motor,OUTPUT);//Sets Motor as output.
  pinMode(buzzer,OUTPUT);//Sets Buzzer as Output.
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
  delayMicroseconds(2); // Sets the trigger pin Low for 2 Microseconds.
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);//Sets the trigger pin HIGH for 10 Microseconds.
  digitalWrite(trigger,LOW);
  delayMicroseconds(2); // Sets the trigger pin Low for 2 Microseconds.
  time=pulseIn(echo,HIGH);
  distance=time*340/20000;// alculate the Distance.
  LCD.setCursor (0,0);
  LCD.print("Water Space in");
  LCD.setCursor (0,1);
  LCD.print(" Tank is: ");
  LCD.print(distance);//prints the distance on the LCD
  LCD.print("Cm");
  delay(1000);
  LCD.clear();
  if(distance<40 && temp==0)
  {
    digitalWrite(motor,LOW);//Sets the motor pin to LOW.
    digitalWrite(buzzer,HIGH);//Sets the Buzzer pin to HIGH.
    
    LCD.setCursor (0,0);
    LCD.print("Water Tank Full");
    LCD.setCursor (0,1);
    LCD.print("Motor Turned OFF");
    LCD.print(millis());
    delay(3000);
    digitalWrite(buzzer,LOW);//Sets the Buzzer pin to LOW.
    delay(1000);
    LCD.clear();
    temp=1;
    
  }
  else if(distance<40 && temp==1)
  {
    digitalWrite(motor,LOW);//Sets the motor pin to LOW.
    
    LCD.setCursor(0,0);
    LCD.print("Water Tank Full");
    LCD.setCursor(0,1);
    LCD.print("Motor Turned OFF");
    delay(1000);
    LCD.clear();
  }
  else if(distance>100)
  {
    digitalWrite(motor,HIGH);//Sets the motor pin to HIGH.
    
    LCD.setCursor(0,0);
    LCD.print("LOW Water Level");
    LCD.setCursor(0,1);
    LCD.print("Motor Turned ON");
    delay(1000);
    temp=0;
    LCD.clear();
  }
}
