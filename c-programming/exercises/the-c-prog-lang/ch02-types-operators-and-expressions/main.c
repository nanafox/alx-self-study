#include <stdio.h>
#include "_atoi.c"

/**
 * main - convert two string to integers and add them
 *
 * Return: 0
 */
int main(void)
{
	char *num1 = "123";
	char *num2 = "10";
	int sum = _atoi(num1) + _atoi(num2);

	printf("%d\n", sum);

	return (0);
}
