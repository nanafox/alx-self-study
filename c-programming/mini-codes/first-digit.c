#include <stdio.h>

int first_digit(int n);

/**
 * main - recursive functions
 *
 * Return: 0
 */
int main(void)
{
	int num;

	puts("Get the first number\n\n");
	printf("Enter a number: ");
	scanf("%d", &num);

	int f_num = first_digit(num);

	printf("First digit: %d\n", f_num);

	return (0);
}

/**
 * first_digit - get the first digit in a number
 *
 * @n: number to check
 *
 * Return: first digit
 */
int first_digit(int n)
{
	if (n < 10)
		return (n);

	return (first_digit(n / 10));
}
