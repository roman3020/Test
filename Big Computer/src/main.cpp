#include <Arduino.h>
#include <Wire.h>
#include <esp32-hal-adc.h>
#include <SPI.h>
//#include "sd_update.h"
#include "lcd_i2c.h"
#include "temp_sensor.h"

void setup() 
{
   // Inicializar el LCD
   lcdInit();
  
}

void loop() {

 // Leer temperatura del sensor LM50
  float temperature = readTemperature();
 // Mostrar la temperatura en el LCD
  lcdPrintTemperature(temperature);
 // Esperar un momento antes de volver a leer la temperatura
  
bool alarmActive = false; //Flag to indicate if an alarm is active

  if (temperature < 15) {
    alarmActive = true;
    lcd.setCursor(6, 3);
    lcd.print("TEMP FAIL");
    lcd.setCursor(16, 1);
    lcd.print("    ");
    // Add your alarm action here, e.g., power off the overdrive
  } else if (temperature >= 60 && temperature <= 80) {
    alarmActive = true;
    lcd.setCursor(6, 3);
    lcd.print("TEMP WARNING  ");
    // Add your alarm action here, e.g., send to overdrive 6db.
  } else if (temperature >= 81) {
    alarmActive = true;
    lcd.setCursor(6, 3);
    lcd.print("TEMP VERY HIGH");
    // Add your alarm action here, e.g., power off the overdrive.
  }  else {
    alarmActive = false; // Limpiar la bandera de alarma cuando no hay alarma
    lcd.setCursor(6, 3);
    lcd.print("              ");
  }
  
  delay(1000);
  
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}