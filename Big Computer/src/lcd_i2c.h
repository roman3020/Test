#ifndef LCD_I2C_H
#define LCD_I2C_H

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define LCD_ADDRESS 0x27 // Dirección I2C del LCD 20x4
#define LCD_COLUMNS 20   // Número de columnas del LCD
#define LCD_ROWS 4       // Número de filas del LCD
#define SDA_PIN 19    // Define los pines GPIO que utilizarás para la comunicación I2C
#define SCL_PIN 20    

extern LiquidCrystal_I2C lcd;

void lcdInit();
void lcdPrintTemperature(float temperature);

#endif // LCD_I2C_H
