#include <stdio.h>

/*function declaration - prototype*/
int MultiTwo(int x, int y);

/**
 * main - solution to Exercise2 (Hour 15)
 *
 * Return: 0
 */
int main(void)
{
	int a = 10;
	int b = 20;

	int product = MultiTwo(a, b); /*calling the function*/

	printf("The product of %d and %d is %d\n", a, b, product);
}

/**
 * MultiTwo - get the product of two integers
 *
 * @x: num1
 * @y: num2
 *
 * Return: product of x and y
 */
int MultiTwo(int x, int y)
{
	return (x * y); /*return the product*/
}
