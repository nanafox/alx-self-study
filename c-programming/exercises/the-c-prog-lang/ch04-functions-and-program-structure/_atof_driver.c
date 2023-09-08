#include <stdio.h>
#include "_atof.c"
#define SIZE 4

/**
 * main - driver to test _atof() function
 *
 * Return: 0
 */
int main(void)
{
	double sum = 0;
	char decimals[][10] = {
		{"120.342"}, {"342.123"},
		{"-34."}, {"3.124"}
	};

	for (int i = 0; i < SIZE; i++)
	{
		printf("str: %8s, float: %-10f\n", decimals[i], _atof(decimals[i]));
		sum += _atof(decimals[i]);
	}

	printf("\nSum of floats: %f\n", sum);

	return (0);
}
