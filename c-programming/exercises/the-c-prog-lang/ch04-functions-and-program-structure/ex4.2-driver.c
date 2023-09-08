#include <stdio.h>
#include "ex4.2-_atof_sci.c"
#define SIZE 4

/**
 * main - driver code to test Exercise 4-2
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char s[SIZE][20] = {
		{"1234.56e-2"}, {"-234.3e1"},
		{"45.3e-4"}, {"-764.213e2"}
	};
	float f[] = {1234.56e-2, -234.3e1, 45.3e-4, -764.213e2};

	for (i = 0; i < SIZE; i++)
	{
		printf("Theirs: %f\n", f[i]);
		printf("Mine:   %f\n", _atof_sci(s[i]));
	}

	return (0);
}
