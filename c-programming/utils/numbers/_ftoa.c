#include <math.h>
#include "../strings/string_io.h"

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
int int_to_str(int x, char *str, int d)
{
	int i = 0;

	while (x)
	{
		str[i++] = (x % 10) + '0';
		x = x / 10;
	}

	/* If number of digits required is more, the  add 0s at the beginning */
	while (i < d)
		str[i++] = '0';

	_reverse(str, i);
	str[i] = '\0';
	return (i);
}

/**
 * _ftoa - Converts a floating-point/double number to a string.
 *
 * @f: floating point number
 * @s: string to store the result
 */
void _ftoa(double f, char *s)
{
	/* Extract integer part */
	int ipart = (int)f;

	/* Extract floating part */
	float fpart = (f - (float)ipart) * pow(10, 6);

	/* convert integer part to string */
	int i = int_to_str(ipart, s, 0);

	s[i] = '.'; /* add dot */

	int_to_str((int)fpart, s + i + 1, 6);
}
