#include <stdio.h>

/**
 * main - Program to illustrate bitwise operators
 *
 * Return: 0
*/
int main(void)
{
	unsigned int w1 = 0525u, w2 = 0707u, w3 = 0122u;

	/* AND, OR, XOR */
	printf("%o %o %o\n", w1 & w2, w1 | w2, w1 ^ w2);
	/*the ones complement*/
	printf("%o %o %o\n", ~w1, ~w2, ~w3);
	printf("%o %o %o\n", w1 ^ w1, w1 & ~w2, w1 | w2 | w3);
	printf("%o %o\n", (w1 | (w2 & w3)), (w1 | (w2 & ~w3)));
	/* binary and unary bit operations. AND, OR, Complement */
	printf("%o %o\n", ~(~w1 & ~w2), ~(~w1 | ~w2));

	w1 ^= w2;
	w2 ^= w1;
	w1 ^= w2;

	printf("w1 = %o, w2 = %o\n", w1, w2);
	return (0);
}
