#include "lcd_i2c.h"

LiquidCrystal_I2C lcd(LCD_ADDRESS, LCD_COLUMNS, LCD_ROWS);

void lcdInit() {
    Wire.begin(SDA_PIN, SCL_PIN);
    lcd.init();
    lcd.backlight(); // Encender retroiluminación
    lcd.setCursor(4, 1);
    lcd.print("AD RADIO LLC");
    lcd.setCursor(4, 3);
    lcd.print("MADE IN USA");
    delay (5000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("FWD: ");
    lcd.setCursor(0, 1);
    lcd.print("REF: ");
    lcd.setCursor(0, 2);
    lcd.print("VSWR: ");
    lcd.setCursor(0, 3);
    lcd.print("FAULT: ");
    lcd.setCursor(10, 1);
    lcd.print("TEMP: ");
}

void lcdPrintTemperature(float temperature) {
    lcd.setCursor(16, 1); // Posición para imprimir la temperatura
    lcd.print(temperature,0); // Imprimir la temperatura con un decimal
    lcd.print(" C");
}