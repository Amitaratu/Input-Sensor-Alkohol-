#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
int PIR_SENSOR_LOW=3;
int RED_LED=4;
int GREEN_LED=5;

void setup() {
  // put your setup code hare, to run code:
 pinMode(PIR_SENSOR_LOW, INPUT_PULLUP);
 pinMode(RED_LED,OUTPUT);
 pinMode(GREEN_LED,OUTPUT);
lcd.begin(20,4);
lcd.setCursor(0,0);
lcd.print("SISTEM PENDETEKSI");
lcd.setCursor(0,1);
lcd.print("ALKOHOL");
lcd.setCursor(0,2);
lcd.print("AMITA TELKOM PNJ");
delay(2000);
}

void loop() {
  //put your main code here, to run repeatedly;
  int PIR_SENSOR_LOW_READ = digitalRead(PIR_SENSOR_LOW);
  if (PIR_SENSOR_LOW_READ == HIGH)
{
  lcd.clear();
  lcd.setCursor(0,3);
  lcd.print("ALKOHOL DETECTED");
  digitalWrite(RED_LED,HIGH);
  digitalWrite(GREEN_LED,LOW);
  delay(20);
}
else //ocerwise
{
  lcd.clear();
  lcd.setCursor(0,3);
  lcd.print("ALKOHOL NOT DETECTED");
  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(RED_LED, LOW);
  delay (20);
}

 
}
