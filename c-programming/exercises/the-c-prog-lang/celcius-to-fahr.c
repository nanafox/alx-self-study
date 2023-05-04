/*
    Celcius <-> Fahrenheit Convertor
    Celius to Farhenheit: (0°C × 9 / 5) + 32
    Fahrenheit to Celcius formula: (0°F-32) x 5 / 9
*/

#include <stdio.h>

/// @brief Performs fahrenheit to celcius conversion
/// @param celcius_temperature The temperature in Fahrenheit
/// @returns Temperature in Farhenheit
float celcius_to_fahr(float celcius_temperature)
{
    // compute fahr from celcius
    return (celcius_temperature * 9 / 5) + 32;
}

/// @brief Performs fahrenheit to celcius conversion
/// @param fahr_temperature The temperature in Fahrenheit
/// @returns Temperature in Celcius
float fahr_to_celcius(float fahr_temperature)
{
    // compute fahr from celcius
    return 5 * (fahr_temperature - 32) / 9;
}
