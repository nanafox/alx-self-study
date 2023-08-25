#include "../include/io_handlers.h"
#include <math.h>
#include <stdio.h>

/**
 * int_to_str - Converts a given integer x to string @str
 * is the number of digits required in the output.
 * If d is more than the number of digits in x,
 * then 0s are added at the beginning.
 *
 * @x: integer
 * @str: string
 * @d: precision
 *
 * Return: length of s
 */
int int_to_str(long long x, char *str, int d)
{
	int i = 0;
	long long int sign = x;

	if (x < 0)
		x = -x;

	while (x)
	{
		str[i++] = (x % 10) + '0';
		x = x / 10;
	}

	if (sign < 0)
		str[i++] = '-';
	/* If number of digits required is more, the  add 0s at the beginning */
	while (i < d)
		str[i++] = '0';
	str[i] = '\0';
	_reverse(str, i);
	return (i);
}

/**
 * _ftoa - Converts a floating-point/double number to a string.
 *
 * @f: floating point number
 * @s: string to store the result
 */
void _ftoa(long double f, char *s)
{
	long double sign = f;
	int j = 0;

	if (f < 0)
		f = -f;
	/* Extract integer part */
	long long ipart = (long long)f;

	/* Extract floating part */
	long double fpart = (f - (long double)ipart) * pow(10, 6);

	/* convert integer part to string */
	if (sign < 0)
		s[j++] = '-';
	int i = int_to_str(ipart, s + j, 0);

	s[i++] = '.';					  /* add dot */
	int_to_str((long long)fpart, s + i, 6); /* convert the fractional part */
}
