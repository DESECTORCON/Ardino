#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#define PINQ A0
LiquidCrystal_I2C lcd(0x3F,16,2);
void setup() {
  lcd.init();
  lcd.backlight();
  lcd.print("VOL:");
}

void loop() {
  int ar = analogRead(A0);
  char pr[8];
  sprintf(pr, "%4d cm", ar);
  lcd.setCursor(0,1);
  lcd.print(pr);
  

}
