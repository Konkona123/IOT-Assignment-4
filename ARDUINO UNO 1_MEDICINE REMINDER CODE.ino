#include <LiquidCrystal.h>

#define D4 5
#define D5 4
#define D6 3
#define D7 2
#define E 11
#define RS 12

int buzz= 13;

LiquidCrystal LCD(12, 11, 5, 4, 3, 2);

void setup()
{
  Serial.begin(9600);
  pinMode(buzz, OUTPUT);
  // set up the LCD's number of columns and rows:
  LCD.begin(16, 2);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,INPUT);
}

void loop()
{
  digitalWrite(9,1);
  digitalWrite(8,0);
  delay(1000);
  digitalWrite(9,0);
  digitalWrite(8,1);
  LCD.setCursor(4, 0);
  LCD.print("CROCIN");
  LCD.setCursor(2, 1);
  LCD.print("QUANTITY: 2");
  digitalWrite(buzz, HIGH); 
  delay(1000);
  digitalWrite(buzz, LOW);  
  LCD.clear();
  delay(1000);
  digitalWrite(9,1);
  digitalWrite(8,0);
  delay(1000);
  digitalWrite(9,0);
  digitalWrite(8,1);
  LCD.setCursor(4, 0);
  LCD.print("Strepsil");
  LCD.setCursor(2, 1);
  LCD.print("Quantity: 3");
  digitalWrite(buzz, HIGH); 
  delay(1000);
  digitalWrite(buzz, LOW); 
  LCD.clear();
  delay(1000);
  digitalWrite(9,1);
  digitalWrite(8,0);
  delay(1000);
  digitalWrite(9,0);
  digitalWrite(8,1);
  LCD.setCursor(4, 0);
  LCD.print("Saridone");
  LCD.setCursor(2, 1);
  LCD.print("Quantity: 1");
  digitalWrite(buzz, HIGH); 
  delay(2000);
  digitalWrite(buzz, LOW); 
  LCD.clear();
  delay(8000);
  
  
  
  
}