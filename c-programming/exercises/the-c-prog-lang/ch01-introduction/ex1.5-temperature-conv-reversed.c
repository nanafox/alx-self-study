#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/**
 * main - temperature convertor -> fahrenheit to celcius.
 *
 * Task: Modify the temperature conversion program to print the table in 
 * reverse order, that is, from 300 degrees to 0.
 *
 * Return: 0
 */
int main(void)
{
	int fahr;

	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
		printf("%3d°F -> %6.1f°C\n", fahr, (fahr-32) / 1.8);
	
	return (0);
}
