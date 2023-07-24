#include <stdio.h>

/**
 * main - fahrenheit to celcius conversion
 *
 * Task: Modify the temperature conversion program to print 
 * a heading above the table.
 *
 * Return: 0
 */
int main(void)
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	
	printf("%s%12s\n", "Fahrenheit", "Celcius");
	printf("%s%12s\n", "===========", "========");
	while (fahr <= upper)
	{
		celcius = (fahr - 32) / 1.8;
		printf("%5.0f° %13.1f°\n", fahr, celcius);
		fahr += step;
	}
}
