#include <stdio.h>
#define ABS(X) ((X < 0) ? -X : X)

char *_itoa(int n, char *s);

/**
 * main - driver code
 *
 * Return: 0
 */
int main(void)
{
	char s[10];

	_itoa(-123, s);
	printf("%s\n", s);
	return (0);
}

/**
 * _itoa - convert integer to string
 * @n: number
 * @s: buffer to store converted integer
 *
 * Exercise 4-12: Adapt the ideas of printd to write a recursive version of
 * itoa; that is, convert an integer into a string by calling a recursive
 * routine.
 *
 * Return: pointer to buffer
 */
char *_itoa(int n, char *s)
{
	char *tmp = s;

	if (n / 10)
		tmp = _itoa(n / 10, tmp);
	else if (n < 0)
		*tmp++ = '-';
	*tmp++ = ABS(n % 10) + '0';
	*tmp = '\0';

	return (tmp);
}
