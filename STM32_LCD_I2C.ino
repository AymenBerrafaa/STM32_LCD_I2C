// STM32 Nucleo-C031C6 I2C Example
// Simulation: https://wokwi.com/projects/365421666018061313

#include "LiquidCrystal_I2C.h"

#define I2C_ADDR    0x27
#define LCD_COLUMNS 16
#define LCD_LINES   2

LiquidCrystal_I2C lcd(I2C_ADDR, LCD_COLUMNS, LCD_LINES);

void setup() {
  Serial.begin(115200);
  Serial.println("Hello, STM32!");

  lcd.init();
  lcd.backlight();

 
  lcd.setCursor(1, 0);
  lcd.print("Aymen & Aziz");
   lcd.setCursor(2, 1);
  lcd.print("    SARI3");
}

void loop() {
}
