#include <stdio.h>
#define get_quotient(expr) (printf(#expr " = %g\n", expr))
#define paste(front, back) front ## back

/**
 * main - testing macro functions
 *
 * Return: 0
 */
int main(void)
{
	int i = paste(10, 12);

	printf("i: %d\n", i);
	get_quotient(10 / 2.);
	get_quotient(5 / 2.5);
	get_quotient(9 / 3.);
	get_quotient(100 / 3.);

	return (0);
}
