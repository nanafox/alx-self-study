#include <stdio.h>
#include <stdarg.h>

int get_product(int x, ...);

/**
 * main - solution to exercise 3 (Hour 15)
 *
 * Return: 0
*/
int main(void)
{
	int a = 10;
	int b = 3;
	int c = 2;
	int d = 1;
	int count = 4;

	int product = get_product(count, a, b, c, d);

	printf("Result: %d\n", product);

	return (0);
}

/**
 * get_product - get the product of n numbers
 *
 * @x: last fixed argument size
 *
 * Return: product
 */
int get_product(int x, ...)
{
	int product = 1; /*initialized to 1 so it doesn't return 0 all the time*/
	va_list numbers; /*argument pointer*/

	va_start(numbers, x);
	for (int i = 0; i < x; i++)
		product *= va_arg(numbers, int);
	va_end(numbers);

	return (product);
}
