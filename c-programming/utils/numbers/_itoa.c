#include "nums_lib.h"
#include "../strings/string_io.h"

/**
 * _itoa - convert integer to string
 *
 * @n: the integer to convert
 * @s: string to store results
 *
 * Note: The conversion stores the results in a reversed order
 *
 * Return: length of @s
 *
 */
void _itoa(int n, char *s)
{
	int i = 0, sign = n;

	if (n < 0) /* check if negative */
		n = -n; /* make n positive */

	do {
		s[i++] = n % 10 + '0'; /* get next digit */
	} while ((n /= 10) > 0);

	if (sign < 0)
		s[i++] = '-';

	s[i] = '\0';
	_reverse(s, i);
}
