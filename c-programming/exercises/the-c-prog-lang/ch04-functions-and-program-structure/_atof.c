#include <ctype.h>

/**
 * _atof - convert string to float
 *
 * @s: string to convert
 *
 * Return: floating point version of s
 */
double _atof(char *s)
{
	double val, power;
	int i, sign;

	for (i = 0; isspace(s[i]); i++) /* skip whitespace */
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0'); /* convert integer part */
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++) /* convert floating part */
	{
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}

	return ((sign * val) / power);
}
