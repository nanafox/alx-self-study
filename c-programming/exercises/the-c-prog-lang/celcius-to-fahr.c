/*
    Celcius <-> Fahrenheit Convertor
    Celius to Farhenheit: (0°C × 9 / 5) + 32
    Fahrenheit to Celcius formula: (0°F-32) x 5 / 9
*/

#include <stdio.h>

int celcius_to_fahr(float celcius_temperature); /*Covert celcius to farhenheit*/
int fahr_to_celcius(float fahr_temperature);    /*Convert farhenheit to celcius*/

int main(void)
{
    float fahr = celcius_to_fahr(45);
    float celcius = fahr_to_celcius(fahr); /*Covert the fahr value received*/

    printf("Fahrenheit temperature: %.2f°F\n", fahr);
    printf("Celcius temperature: %.2f°C\n", celcius);

    return 0;
}

/// @brief Performs fahrenheit to celcius conversion
/// @param celcius_temperature The temperature in Fahrenheit
/// @returns Temperature in Farhenheit
int celcius_to_fahr(float celcius_temperature)
{
    // compute fahr from celcius
    return (celcius_temperature * 9 / 5) + 32;
}

/// @brief Performs fahrenheit to celcius conversion
/// @param fahr_temperature The temperature in Fahrenheit
/// @returns Temperature in Celcius
int fahr_to_celcius(float fahr_temperature)
{
    // compute fahr from celcius
    return 5 * (fahr_temperature - 32) / 9;
}