#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void AddDouble(double addends, ...);

/**
 * main - solution to exercise 4 (Hour 15)
 *
 * Return: 0
*/
int main(void)
{
	double a = 10.2;
	double b = 13.8;
	double c = 2.3;
	double d = 0.2;
	int count = 4;

	AddDouble(count, a, b, c, d);
}

void AddDouble(double addends, ...)
{
	system("clear");

	double sum = 0.0;
	va_list numbers;

	/*print arguments passed to functions*/
	va_start(numbers, addends);
	for (int i = 0; i < addends; i++)
		printf("arg %d: %g\n", i + 1, va_arg(numbers, double));
	va_end(numbers);

	/*compute the sum - extra bonus*/
	va_start(numbers, addends);
	for (int i = 0; i < addends; i++)
		sum += va_arg(numbers, double);

	printf("\nSum: %g\n", sum);
}
