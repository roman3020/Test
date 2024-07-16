#include "vswr.h"

/*float read_adc_voltage(int pin) {
     Replace with actual ADC reading code
    int adc_value = read_adc_value(pin); // Implement ADC reading function
    float voltage = adc_value * ADC_VREF / (1 << ADC_RESOLUTION);
    return voltage;
}*/

float calculate_vswr(float potencia_directa, float potencia_reflejada) {
    float coeficiente_reflexion = sqrt(potencia_reflejada / potencia_directa);
    return (1 + coeficiente_reflexion) / (1 - coeficiente_reflexion);
}