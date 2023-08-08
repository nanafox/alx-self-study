#include <stdio.h>

int rightrot(int x, int n);

/**
 * main - Exercise 2-8
 *
 * Task: Write a function rightrot(x, n) that returns the value of the
 * integer x rotated to the right by n bit positions.
 *
 * Return: 0
 */
int main(void)
{
	printf("15  >> 2  %d\n", rightrot(15, 2));
	printf("32  >> 3  %d\n", rightrot(32, 3));
	printf("128 >> 6  %d\n", rightrot(128, 6));

	return (0);
}

/**
 * rightrot - shift bits to the right
 *
 * @x: number
 * @n: number of bits to shifts right
 *
 * Return: x rotated to the right by n bits
 */
int rightrot(int x, int n)
{
	return (x >> n);
}
