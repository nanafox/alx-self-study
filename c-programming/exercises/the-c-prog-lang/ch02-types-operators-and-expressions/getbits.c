#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main(void)
{
	int x = 10;
	int p = 5;
	int n = 3;

	printf("%d\n", getbits(x, p, n));
	printf("%d\n", ~5);

	return (0);
}

unsigned getbits(unsigned x, int p, int n)
{
	return ((x >> (p + 1 - n)) & ~(~0 << n));
}
