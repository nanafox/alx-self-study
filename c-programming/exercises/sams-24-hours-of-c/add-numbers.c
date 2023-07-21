#include <stdio.h>
#include <stdarg.h>

double add(double numbers, ...);

/**
 * main - using variadic functions
 *
 * Return: 0
 */
int main(void)
{
	double a = 3.3;
	double b = 3.0;

	printf("%.2f\n", add(3, a, b, 1.0));
	return (0);
}

/**
 * add - adds numbers together
 *
 * @numbers: numbers to add
 *
 * Return: sum of numbers.
 */
double add(double numbers, ...)
{
	va_list num_list; /*pointer to the last fixed argument*/

	double sum = 0.0;

	va_start(num_list, numbers);
	for (int i = 0; i < numbers; i++)
		sum += va_arg(num_list, double);
	va_end(num_list);

	return (sum);
}
