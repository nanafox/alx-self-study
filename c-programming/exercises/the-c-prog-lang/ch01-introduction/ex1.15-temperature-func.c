#include <stdio.h>

void fahrenheit_to_celsius(float temp_in_fahr);

/**
 * main - Exercise 1-15
 *
 * Rewrite the temperature conversion program of Section 1.2 to
 * use a function for conversion.
 *
 * Return: 0
 */
int main(void)
{
	float fahr, celsius;
	int lower = 0;
	int upper = 300;
	int step = 20;

	fahr = lower;
	while (fahr <= upper)
	{
		fahrenheit_to_celsius(fahr); /* use a function for the conversion */
		fahr += step;
	}

	return (0);
}

/**
 * fahrenheit_to_celsius - fahrenheit to celsius temperature convertor
 *
 * @temp_in_fahr: temperature in fahrenheit
 */
void fahrenheit_to_celsius(float temp_in_fahr)
{
	printf("%3.0f°F -> %6.1f°C\n", temp_in_fahr, (temp_in_fahr - 32) / 1.8);
}
