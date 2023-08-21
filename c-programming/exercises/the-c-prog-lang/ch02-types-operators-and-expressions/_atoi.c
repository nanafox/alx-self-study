/**
 * _atoi - string to integer convertor
 *
 * @s: string
 *
 * Return: number as integer
 */
int _atoi(char *s)
{
	int n = 0;

	for (int i = 0; s[i] >= '0' && s[i] <= '9'; i++)
		n = 10 * n + (s[i] - '0');
	return (n);
}
