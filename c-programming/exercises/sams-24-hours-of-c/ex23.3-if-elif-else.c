#include <stdio.h>

#define UPPER_CASE 0
#define NO_ERROR 0

/**
 * main - solution to exercise 3, hour 23
 *
 * using #if, #elif, and #else directives
 *
 * Return: 0
 */
int main(void)
{
	#if UPPER_CASE
		printf("THIS LINE IS PRINTED,\n");
		printf("BECAUSE UPPERCASE IS DEFINED.\n");
	#elif LOWER_CASE
		printf("This line is printed out,\n");
		printf("because LOWER_CASE is not define.");
	#else
		printf("Neither UPPER_CASE nor LOWER_CASE is defined.\n");
	#endif
	
	return (NO_ERROR);
}
