/*
    Write a program that converts 27° from degrees Fahrenheit (F) to degrees Celsius
    (C) using the following formula:
    C = (F - 32) / 1.8
*/

#include <stdio.h>
#include "../the-c-prog-lang/celcius-to-fahr.c"

int main(void)
{
    float celcius = fahr_to_celcius(27);
    float fahr = celcius_to_fahr(celcius);
    printf("Celcius: %f\n", celcius);
    printf("Fahrenheit: %f\n", fahr);
}