#include <stdio.h>

unsigned int invert(int x, int p, int n);

/**
 * main - Exercise 2-7
 *
 * Task: Write a function invert(x,p,n) that returns x with the n bits
 * that begin at position p inverted (i.e., 1 changed into 0 and vice versa),
 * leaving the others unchanged.
 *
 * Return: 0
 */
int main(void)
{
	printf("%d\n", invert(4, 2, 1));
	printf("%d\n", invert(8, 6, 3));
	printf("%d\n", invert(12, 8, 3));

	return (0);
}

/**
 * invert - invert bits
 *
 * @x: value to return
 * @n: used to create mask
 * @p: used to create mask
 *
 * Return: x XOR mask
 */
unsigned int invert(int x, int p, int n)
{
	int mask = ((1 << n) - 1) << p;

	return (x ^ mask);
}
