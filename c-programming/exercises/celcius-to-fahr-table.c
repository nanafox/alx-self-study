// Celsius-Fahrenheit table-> Exercise 1-4 (The C Programming Lanuage)

//  Celius to Farhenheit: (0°C × 9 / 5) + 32

#include <stdio.h>

void print_fahr_to_celcius_table(int lower, int upper, int step);

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
    print_fahr_to_celcius_table(lower, upper, step);

    return 0;
}

/// @brief Celcius to Fahrenheit Table Generator
/// @param lower lower limit of temperature table
/// @param upper upper limit
/// @param step step size
void print_fahr_to_celcius_table(int lower, int upper, int step)
{

    float fahr, celcius;

    // Format the output -> satisfies Exercise 1-3
    printf("%6s %16s\n", "Celcius", "Fahrenheit");
    printf("%6s %16s\n", "--------", "-----------");

    // for (celcius = lower; celcius <= upper; celcius += step)
    for (celcius = upper; celcius >= lower; celcius -= step) // Reversed to fit Exercise 1-5
    {
        // right adjust the text to beautify it a bit
        printf("%6.2f°C %12.2f°F\n", celcius, (celcius * 9 / 5) + 32); // 2 decimal places
    }

    /* While loop version of the same logic.
        celcius = lower; // starting point

        while (celcius <= upper)
        {
            // perform fahr to celcius conversion
            fahr = (celcius * 9 / 5) + 32;
            // right adjust the text to beautify it a bit
            printf("%6.2f°C %12.2f°F\n", celcius, fahr); // 2 decimal places
            celcius += step;
        }
    */
}
