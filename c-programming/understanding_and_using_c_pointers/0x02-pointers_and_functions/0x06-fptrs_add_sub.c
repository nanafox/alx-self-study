#include <stdio.h>
#include <stdlib.h>

int compute(int (*operation)(int, int), int num1, int num2);
int add(int x, int y);
int sub(int x, int y);

/**
 * main - prints the results of addition or subtraction operation
 * @argc: number of command line arguments
 * @argv: arguments received on the command line. Expects 3; the
 * first and second operands, and either 0 or 1 for addition or
 * subtraction respectively
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y, op;

	if (argc != 4)
	{
		fprintf(stderr, "Usage: %s num1 num2 {0=subtraction, 1=addition}\n",
				argv[0]);
		exit(1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	op = atoi(argv[3]);

	switch (op)
	{
	case 0: /* compute difference */
		printf("%d - %d = %d\n", x, y, compute(sub, x, y));
		break;
	case 1: /* compute difference */
		printf("%d + %d = %d\n", x, y, compute(add, x, y));
		break;
	default: /* invalid operation */
		fprintf(stderr, "Error: Use 0 for subtraction, or 1 for addition\n");
		break;
	}

	return (0);
}

/**
 * add - returns the sum of two numbers
 * @x: the first operand
 * @y: the second operand
 *
 * Return: the sum of @num1 and @num2
 */
int add(int x, int y)
{
	return (x + y);
}

/**
 * sub - returns the difference of two numbers
 * @x: the first operand
 * @y: the second operand
 *
 * Return: the difference of @num1 and @num2
 */
int sub(int x, int y)
{
	return (x - y);
}

/**
 * compute - returns the result of either addition or subtraction operation
 * @operation: a function pointer to handle the operation
 * @num1: the first operand
 * @num2: the second operand
 *
 * Return: the result of either addition or subtraction
 */
int compute(int (*operation)(int, int), int num1, int num2)
{
	return (operation(num1, num2));
}
