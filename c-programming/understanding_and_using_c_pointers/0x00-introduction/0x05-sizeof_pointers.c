#include <stdio.h>

/**
 * main - Prints the size of pointers
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of (char *):   %ld\n", sizeof(char *));
	printf("Size of (int *):    %ld\n", sizeof(int *));
	printf("Size of (double *): %ld\n", sizeof(double *));

	return (0);
}
