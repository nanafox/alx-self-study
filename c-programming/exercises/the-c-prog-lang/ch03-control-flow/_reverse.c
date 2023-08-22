/**
 * _reverse - reverse string in place
 *
 * @s: string to reverse
 */
void _reverse(char *s)
{
	char *end = s;

	for (; *(end + 1) != '\0'; end++) /* check the end of the string */
		;

	/* swap positions */
	for (; s < end; s++, end--)
	{
		char temp = *s;
		*s = *end;
		*end = temp;
	}
}
