# 1 "B:\\LTTS\\Projects\\Module2\\M2_EmbSys\\PROJECT\\3_Implementation\\AWLIAC\\Automatic_Water_level_IAC\\Automatic_Water_level_IAC.ino"
# 2 "B:\\LTTS\\Projects\\Module2\\M2_EmbSys\\PROJECT\\3_Implementation\\AWLIAC\\Automatic_Water_level_IAC\\Automatic_Water_level_IAC.ino" 2





LiquidCrystal LCD(A0,A1,A2,A3,A4,A5);////Pin on the arduino where the Rs,En,D4,D5,D6,D7 Pins are  connected
float time=0,distance=0;
int temp=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(10 /*Pin on the arduino where the trigger pin is connected.*/,0x1);//Sets Trigger pin as output.
  pinMode(11 /*Pin on the arduino where the Echo pin is connected.*/,0x0);//Sets Echo pin as input.
  pinMode(8 /*Pin on the arduino where the Motor pin is connected.*/,0x1);//Sets Motor as output.
  pinMode(12 /*Pin on the arduino where the Buzzer(Led used) pin is connected.*/,0x1);//Sets Buzzer as Output.
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
  digitalWrite(10 /*Pin on the arduino where the trigger pin is connected.*/,0x0);
  delayMicroseconds(2); // Sets the trigger pin Low for 2 Microseconds.
  digitalWrite(10 /*Pin on the arduino where the trigger pin is connected.*/,0x1);
  delayMicroseconds(10);//Sets the trigger pin HIGH for 10 Microseconds.
  digitalWrite(10 /*Pin on the arduino where the trigger pin is connected.*/,0x0);
  delayMicroseconds(2); // Sets the trigger pin Low for 2 Microseconds.
  time=pulseIn(11 /*Pin on the arduino where the Echo pin is connected.*/,0x1);
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
    digitalWrite(8 /*Pin on the arduino where the Motor pin is connected.*/,0x0);
    digitalWrite(12 /*Pin on the arduino where the Buzzer(Led used) pin is connected.*/,0x1);

    LCD.setCursor (0,0);
    LCD.print("Water Tank Full");
    LCD.setCursor (0,1);
    LCD.print("Motor Turned OFF");
    LCD.print(millis());
    delay(3000);
    digitalWrite(12 /*Pin on the arduino where the Buzzer(Led used) pin is connected.*/,0x0);
    delay(1000);
    LCD.clear();
    temp=1;

  }
  else if(distance<40 && temp==1)
  {
    digitalWrite(8 /*Pin on the arduino where the Motor pin is connected.*/,0x0);

    LCD.setCursor(0,0);
    LCD.print("Water Tank Full");
    LCD.setCursor(0,1);
    LCD.print("Motor Turned OFF");
    delay(1000);
    LCD.clear();
  }
  else if(distance>100)
  {
    digitalWrite(8 /*Pin on the arduino where the Motor pin is connected.*/,0x1);

    LCD.setCursor(0,0);
    LCD.print("LOW Water Level");
    LCD.setCursor(0,1);
    LCD.print("Motor Turned ON");
    delay(1000);
    temp=0;
    LCD.clear();
  }
}
