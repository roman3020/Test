#ifndef TEMP_SENSOR_H
#define TEMP_SENSOR_H

#include <esp32-hal-adc.h>

#define LM50_PIN 1 // Pin analógico al que está conectado el sensor LM50

float readTemperature();

#endif // TEMP_SENSOR_H
