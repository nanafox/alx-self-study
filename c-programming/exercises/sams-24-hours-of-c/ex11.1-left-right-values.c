#include <stdio.h>

/**
 * main - a program to print the left values and right values
 *
 * Return: 0
*/
int main(void)
{
	int x = 512;
	int y = 1024;
	int z = 2048;

	printf("Address (left value) of x=%p, content(right value)=%d\n", &x, x);
	printf("Address (left value) of y=%p, content(right value)=%d\n", &y, y);
	printf("Address (left value) of z=%p, content(right value)=%d\n", &z, z);

	return (0);
}

