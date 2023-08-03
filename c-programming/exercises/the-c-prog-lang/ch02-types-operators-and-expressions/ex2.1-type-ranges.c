#include <limits.h>
#include <float.h>
#include <stdio.h>

/**
 * main - Exercise 2-1
 *
 * Exercise 2-1. Write a program to determine the ranges of char, short, int,
 * and long variables, both signed and unsigned, by printing appropriate
 * values from standard headers and by direct computation. Harder if you
 * compute them: determine the ranges of the various floating-point types
 *
 * Return: 0
 */
int main(void)
{
	printf("%s\t\t%s\t\t\t%s\n", "Data Type", "Minimum", "Maximum");
	printf("%s\t\t%s\t\t\t%s\n", "=========", "=======", "=======");
	printf("signed char \t\t%d\t\t\t%d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char \t\t%d\t\t\t%d\n", 0, UCHAR_MAX);
	printf("signed short \t\t%d\t\t\t%d\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short \t\t%d\t\t\t%d\n", 0, USHRT_MAX);
	printf("signed int \t\t%d\t\t%d\n", INT_MIN, INT_MAX);
	printf("unsigned int \t\t%u\t\t\t%u\n", 0, UINT_MAX);
	printf("signed long \t\t-%lu\t%lu\n", LONG_MIN, LONG_MAX);
	printf("unsigned long \t\t%u\t\t\t%lu\n", 0, ULONG_MAX);
	printf("float \t\t\t-%g\t\t%g\n", FLT_MIN, FLT_MAX);
	printf("double \t\t\t-%g\t\t%g\n", DBL_MIN, DBL_MAX);

	return (0);
}
