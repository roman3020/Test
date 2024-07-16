#ifndef VSWR_H
#define VSWR_H

#include <stdint.h>
#include <math.h>

// ADC resolution and voltage reference (adjust as needed)
#define ADC_RESOLUTION 12
#define ADC_VREF 3.3

// Load impedance (adjust as needed)
#define LOAD_IMPEDANCE 50.0

// Function prototypes
float read_adc_voltage(int pin);
float calculate_vswr(float potencia_directa, float potencia_reflejada);

#endif