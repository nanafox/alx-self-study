/**
 * _reverse - reverse string in place
 *
 * @s: string to reverse
 * @len: string length
 */
void _reverse(char *s, int len)
{
	/* swap positions */
	for (int i = 0, j = len - 1; i < j; i++, j--)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
	}
}
