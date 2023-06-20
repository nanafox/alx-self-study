#include <stdio.h>

int s; /*default value of zero - just like static variables*/

/**
 * main - checking out scope
 *
 * Return: 0
 */
int main(void)
{
	int n; /*contains garbage value*/

	puts("Print declared but uninitialized variable values");
	printf("Program scope: %d\n", s);
	printf("Block scope: %d\n", n);

	return (0);
}
