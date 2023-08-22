/**
 * _itob - convert integer @n to the specified base in @b and stores the result
 * as a string in @s
 *
 * @n: number
 * @s: malloc'd string to hold representation
 * @b: base to convert @n to
 */
void _itob(int n, char *s, int b)
{
	int i = 0;

	switch (b) /* check base number */
	{
		case 2: case 8: case 10: case 16: /* accepted base */
		do {
			s[i++] = (n % b > 9) ? 'A' + (n % b - 10) : (n % b + '0');
			s = realloc(s, sizeof(char) * 2); /* ask for more memory */
		} while ((n /= b) > 0);

		s[i] = '\0';
		_reverse(s); /* get the correct representation */
		break;

		default:
			fprintf(stderr, "Invalid base number!\n");
			return;
	}
}
