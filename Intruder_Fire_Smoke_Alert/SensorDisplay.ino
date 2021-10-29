
void SensorDisplay()
{
    lcd.setCursor(0,1);
    lcd.print("Fire:");
    lcd.setCursor(10,1);
    lcd.print("Smoke:");
    lcd.setCursor(0,2);
    lcd.print("Door:");
    lcd.setCursor(10,2);
    lcd.print("Window:");
    lcd.setCursor(0,3);
    lcd.print("Intruder:");
}
