#include <ctype.h>
#include <stdio.h>

/**
 * get_double - a helper function
 *
 * @c: a characer to convert to double
 * @val: initial value
 * Return: floating-point number
 */
double get_double(double val, char c)
{
	return (val * 10.0 + (c - '0'));
}

/**
 * _atof_sci - convert string to a floating-point number while handling
 * scientific notations as well.
 *
 * Exercise 4-2: Extend atof to handle scientific notation of the form
 * 123.45e-6 where a floating-point number may be followed by e or E
 * and an optionally signed exponent.
 *
 * @s: string
 * Return: floating point version of string
 */
double _atof_sci(char *s)
{
	double mantissa, power, exponent, get_exponent;
	int i, j, sign, exponent_sign;

	exponent = 1.0; /* default value */

	for (i = 0; isspace(s[i]); i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (mantissa = 0.0; isdigit(s[i]); i++)
		mantissa = get_double(mantissa, s[i]);
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++)
	{
		mantissa = get_double(mantissa, s[i]);
		power *= 10.0;
	}

	if (s[i] == 'e' || s[i] == 'E')
	{
		i++;
		exponent_sign = (s[i] == '-') ? -1 : 1; /* check for negative exponents */
		if (s[i] == '-')
			i++;
		get_exponent = get_double(0.0, s[i]);
		for (j = 1; j <= get_exponent; j++)
			exponent *= 10.0;
		exponent *= exponent_sign;
	}
	if (exponent < 0) /* account for negative exponent */
		return (-((sign * mantissa) / power) / exponent);
	return (((sign * mantissa) / power) * exponent); /* for positive exponents */
}
