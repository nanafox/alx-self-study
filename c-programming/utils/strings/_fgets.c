/**
 * _fgets - fgets wrapper to remove newline character
 * @str: string
 * @len: size of string
 *
 * Return: void. Exits on error.
 */
void _fgets(char *str, int len)
{
	if (fgets(str, len, stdin) == NULL)
		return;
	str[strcspn(str, "\n")] = '\0';
}

