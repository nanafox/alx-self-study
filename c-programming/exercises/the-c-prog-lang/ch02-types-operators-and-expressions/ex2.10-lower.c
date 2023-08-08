#include <unistd.h>

void _putchar(char c);
void print(char *s);
int lower(char c);

/**
 * main - Exercise 2-10
 *
 * Rewrite the function lower, which converts upper case letters
 * to lower case, with a conditional expression instead of if-else.
 *
 * Return: 0
 */
int main(void)
{
	char str[] = "Hello World!";

	for (int i = 0; str[i] != '\0'; i++)
		str[i] = lower(str[i]); /* changes in place */
	print(str);
	return (0);
}

/**
 * lower - convert upper case to lower case
 *
 * @c: letter to convert
 *
 * Return: lower case of c
 */
int lower(char c)
{
	return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
}

/**
 * _putchar - write a single character to stdout
 *
 * @c: character to print
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * print - prints a string with and adds a newline
 *
 * @s: string
 */
void print(char *s)
{
	for (int i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}
