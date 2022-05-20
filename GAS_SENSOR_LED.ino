#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int Gas = 7;
int redLed = 13;
int greenLed = 10;
int buzzer = 9;

void setup()
{
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("Gas sensor MQ-2 ");
  lcd.setCursor(2,1);
  lcd.print("ECE-341 WTP");
  delay(1000);
  lcd.setCursor(0,0);
  lcd.print("SENSING REPORT...");
  pinMode(Gas , INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop(){
  if(digitalRead(Gas) == HIGH){
    lcd.setCursor(0,1);lcd.print("Gas is detected ");
digitalWrite(redLed, HIGH);
digitalWrite(greenLed, LOW);
digitalWrite(buzzer, HIGH);}

  if(digitalRead(Gas) == LOW){
    lcd.setCursor(0,1);lcd.print("Gas not detected");
digitalWrite(redLed, LOW);
digitalWrite(greenLed, HIGH);
digitalWrite(buzzer, LOW);}
}
