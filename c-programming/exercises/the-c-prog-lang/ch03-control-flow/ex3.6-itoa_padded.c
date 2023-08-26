#include "_reverse.c"
#include <stdlib.h>
#include <stdio.h>

void itoa_padded(int n, char *s, int pad);

/**
 * main - solution for exercise 3.6. Padded itoa
 *
 * Exercise 3-6 - Write a version of i toa that accepts three arguments instead
 * of two. The third argument is a minimum field width; the converted number
 * must be padded with blanks on the left if necessary to make it wide enough
 *
 * @argc: arg counter
 * @argv: requires two arguments, the integer number to convert and the amount
 * of padding to add (also an integer).
 *
 * Return: 0 on success, non-zero on error
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s number padding\n", argv[0]);
		return (1);
	}
	char s[1024];

	itoa_padded(atoi(argv[1]), s, atoi(argv[2]));
	printf("%s\n", s);
}

/**
 * itoa_padded - convert integers to strings, padding with blanks where needed
 *
 * @n: integer to convert
 * @s: string to store conversion
 * @pad: number of blanks to add
 */
void itoa_padded(int n, char *s, int pad)
{
	int i = 0, sign = n;

	if (n < 0)
		n = -n;
	do {
		s[i++] = n % 10 + '0';
		n /= 10;
	} while (n > 0);

	if (sign < 0)
		s[i++] = '-';
	for (--pad; pad > 0; --pad)
		s[i++] = ' '; /* pad with space */
	s[i] = '\0';
	_reverse(s);
}
