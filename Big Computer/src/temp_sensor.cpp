#include "temp_sensor.h"

/*
The equation of datasheet is:

Vout= (10mV/*C x temp*C) + 500mV

where 

Vout = + 1.750V at + 125*C
Vout = + 750mV at + 25*C
Vout = + 100mV at - 40*C 
*/ 

float readTemperature() {
  // We read the analog value from the pin where the LM50 is connected.
  int lm50Value = analogRead(LM50_PIN);

 
  // We convert the voltage to temperature in degrees Celsius.
  // The sensitivity is 10mV/°C and the offset is 0.75V at 0°C.
  float temperatureC = lm50Value*1100/(1024*10);
    return temperatureC;
}
// the supply voltage of the LM50 (4.5v to 10v).