#include <stdio.h>

/**
 * main - prints the arguments on the command line
 * @argc: the arguments counter
 * @argv: the argument vector
 *
 * Return: 0
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i]; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
