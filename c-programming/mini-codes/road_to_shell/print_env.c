#include <stdio.h>

/**
 * main - prints the environment variables
 * @argc: arguments counter (unused)
 * @argv: argument vector (unused)
 * @env: environment variables
 *
 * Return: 0
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char *argv[],
		char *env[])
{
	int i;

	for (i = 0; env[i] != NULL; i++)
	{
		printf("%s\n", env[i]);
	}

	return (0);
}
