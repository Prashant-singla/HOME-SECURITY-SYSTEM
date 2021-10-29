#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#define Flame A0
#define Gas A1
#define Pir A2
#define Vib A3
#define Ir A4
#define Buzzer A5
#define Switch 7
boolean Fire, Smoke, Intruder, Window, Door;
boolean Mode = false;

void setup() {
  pinMode(Flame,INPUT_PULLUP);
  pinMode(Gas,INPUT_PULLUP);
  pinMode(Pir,INPUT_PULLUP);
  pinMode(Vib,INPUT_PULLUP);
  pinMode(Ir,INPUT_PULLUP);
  pinMode(Switch,INPUT_PULLUP);
  pinMode(Buzzer,OUTPUT);
  
  lcd.begin(20,4);
  pinMode(Buzzer, OUTPUT);
  lcd.setCursor(0,1);
  lcd.print("HOME SECURITY SYSTEM");
  lcd.setCursor(0,2);
  lcd.print("BY PRASHANT & PREETI");
  delay(1000);
  lcd.clear();  
  SensorDisplay();
}

void loop() 
{
  Fire = digitalRead(Flame);
  Smoke = digitalRead(Gas);
  Intruder = digitalRead(Pir);
  Window = digitalRead(Vib);
  Door = digitalRead(Ir);
  Mode = digitalRead(Switch);  
  SensorValues();

  if(Mode==false)         // Normal mode
  {
    lcd.setCursor(4,0);
    lcd.print("Normal Mode"); 
    if((Fire == HIGH) || (Smoke == HIGH)){
      digitalWrite(Buzzer, HIGH);
    }else{
      digitalWrite(Buzzer, LOW);
    }   
  }
  else                  // Secure Mode
  {
    lcd.setCursor(4,0);
    lcd.print("Secure Mode");
    if((Fire == HIGH) || (Smoke == HIGH) || (Intruder == HIGH) || (Window == HIGH) || (Door == HIGH)){
      digitalWrite(Buzzer, HIGH);
    }else{
      digitalWrite(Buzzer, LOW);
    }
  }
}
