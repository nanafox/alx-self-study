// Fahrenheit-Celsius table

// Fahrt to Celcius Formula: (0°F-32) x 5 / 9

#include <stdio.h>

void get_fahr_to_celcius_table(int lower, int upper, int step);

int main(void)
{
    float lower, upper, step;

    printf("Start Temperature: ");
    scanf("%f", &lower);

    printf("End Temperature: ");
    scanf("%f", &upper);

    printf("Increment By: ");
    scanf("%f", &step);

    printf("\n");

    // invoke function
    get_fahr_to_celcius_table(lower, upper, step);

    return 0;
}

/// @brief Farhenheit to Celcius Table Generator
/// @param lower lower limit of temperature table
/// @param upper upper limit
/// @param step step size
void get_fahr_to_celcius_table(int lower, int  upper, int step)
{
    float fahr, celcius;

    // Format the output -> satisfies ex1-3
    printf("%6s %12s\n", "Fahrenheit", "Celcius");
    printf("%6s %12s\n", "-----------", "---------");

    fahr = lower; // starting point
    while (fahr <= upper)
    {
        // perform fahr to celcius conversion
        celcius = 5 * (fahr - 32) / 9;
        // right adjust the text to beautify it a bit
        printf("%6.2f°F %12.2f°C\n", fahr, celcius);
        fahr += step;
    }
}