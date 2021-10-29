

void SensorValues()
{  
  if(Fire == true){ lcd.setCursor(6,1); lcd.print("Yes");}
  else{ lcd.setCursor(6,1); lcd.print("No ");}
  
  if(Smoke == true){lcd.setCursor(17,1); lcd.print("Yes");}
  else{lcd.setCursor(17,1); lcd.print("No ");}
  
  if(Intruder == true){lcd.setCursor(11,3); lcd.print("Yes");}
  else{lcd.setCursor(11,3); lcd.print("No ");}

  if(Window == true){lcd.setCursor(17,2); lcd.print("Yes");}
  else{lcd.setCursor(17,2); lcd.print("No ");}

  if(Door == true){lcd.setCursor(6,2); lcd.print("Yes");}
  else{lcd.setCursor(6,2); lcd.print("No ");}
}
