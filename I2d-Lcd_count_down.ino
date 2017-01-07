#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x3F, 16, 4);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,2);
  lcd.print("** Count");
  delay(1000);
}

void loop() {
  static int i=0;
  char pr[8];
  lcd.setCursor(0,3);
  sprintf(pr, " No.%4d", i++);
  lcd.print(pr);
  delay(100);
}
