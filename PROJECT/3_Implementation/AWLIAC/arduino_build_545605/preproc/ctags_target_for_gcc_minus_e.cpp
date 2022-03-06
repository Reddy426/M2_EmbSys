# 1 "B:\\LTTS\\Projects\\Module2\\M2_EmbSys\\PROJECT\\3_Implementation\\AWLIAC\\NewWLIAC\\NewWLIAC.ino"
# 2 "B:\\LTTS\\Projects\\Module2\\M2_EmbSys\\PROJECT\\3_Implementation\\AWLIAC\\NewWLIAC\\NewWLIAC.ino" 2





LiquidCrystal LCD(A0,A1,A2,A3,A4,A5);
float time=0,distance=0;
int temp=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(10,0x1);
  pinMode(11,0x0);
  pinMode(8,0x1);
  pinMode(12,0x1);
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
  digitalWrite(10,0x0);
  delayMicroseconds(2);
  digitalWrite(10,0x1);
  delayMicroseconds(10);
  digitalWrite(10,0x0);
  delayMicroseconds(2);
  time=pulseIn(11,0x1);
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
    digitalWrite(8,0x0);
    digitalWrite(12,0x1);

    LCD.setCursor (0,0);
    LCD.print("Water Tank Full");
    LCD.setCursor (0,1);
    LCD.print("Motor Turned OFF");
    LCD.print(millis());
    delay(3000);
    digitalWrite(12,0x0);
    delay(1000);
    LCD.clear();
    temp=1;

  }
  else if(distance<40 && temp==1)
  {
    digitalWrite(8,0x0);

    LCD.setCursor(0,0);
    LCD.print("Water Tank Full");
    LCD.setCursor(0,1);
    LCD.print("Motor Turned OFF");
    delay(1000);
    LCD.clear();
  }
  else if(distance>100)
  {
    digitalWrite(8,0x1);

    LCD.setCursor(0,0);
    LCD.print("LOW Water Level");
    LCD.setCursor(0,1);
    LCD.print("Motor Turned ON");
    delay(1000);
    temp=0;
    LCD.clear();
  }
}
