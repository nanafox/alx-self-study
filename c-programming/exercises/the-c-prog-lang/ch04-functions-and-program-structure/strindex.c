/**
 * strindex - return index of t in s, -1 if none
 *
 * @s: source string
 * @t: patter to match
 *
 * Return: index of t in s, -1 if none
 */
int strindex(char *s, char *t)
{
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = i, k = 0; t[k] != '\0' && t[k] == s[j]; j++, k++)
			; /* search pattern for match */
		if (k > 0 && t[k] == 0)
			return (i); /* return index where match is found */
	}
	return (-1);
}
