#include <stdio.h>

void _strcat(char *src, const char *dest);

/**
 * main - string contenation function check
 *
 * Return: 0
 */
int main(void)
{
	char d[20] = "Hello ";
	char e[10] = "world";

	_strcat(d, e); /* concatenate string */

	printf("%s\n", d);
}

/**
 * _strcat - string concatenation
 *
 * @str: string to concatenated
 * @src: original string
 *
 * Return: 0
 */
void _strcat(char *src, const char *str)
{
	int i, j;

	for (i = 0; src[i] != '\0'; ++i)
		; /* get the end of src string */

	for (j = 0; (src[i] = str[j]) != '\0'; ++i, ++j)
		; /* concatenate string - append*/
}
