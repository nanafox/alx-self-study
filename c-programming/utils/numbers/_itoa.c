/**
 * _itoa - convert integer to string
 *
 * @n: the integer to convert
 * @s: a char array to hold the conversion (must be assigned on heap)
 *
 * Note: The conversion stores the results in a reversed order
 */
void _itoa(int n, char *s)
{
	int i = 0, sign = n;

	if (n < 0) /* check if negative */
		n = -n; /* make n positive */

	do {
		s[i++] = n % 10 + '0'; /* get next digit */
		s = realloc(s, sizeof(char) * 2);
	} while ((n /= 10) > 0);

	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	_reverse(s);
}
