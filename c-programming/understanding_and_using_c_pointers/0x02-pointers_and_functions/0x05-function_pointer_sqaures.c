#include <stdio.h>
#include <stdlib.h>

int (*result)(int);
int square(int x);

int main(int argc, char *argv[])
{
	int x;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s num_to_square\n", argv[0]);
		exit(1);
	}

	x = atoi(argv[1]);

	result = square;

	printf("%d sqaured is %d\n", x, result(x));

	return (0);
}

/**
 * square - returns the square of an integer
 * @x: the number to square
 *
 * Return: @x squared
 */
int square(int x)
{
	return (x * x);
}
