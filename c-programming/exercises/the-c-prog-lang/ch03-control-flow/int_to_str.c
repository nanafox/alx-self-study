#include <stdio.h>
#include "_itoa.c"
#include <stdlib.h>
#include <string.h>

/**
 * main - converting integers to strings
 *
 * @argc: arg count...
 * @argv: a number
 *
 * Return: 0 on success, else non-zero
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s number\n", argv[0]);
		return (1);
	}
	unsigned char *s = malloc(sizeof(char));

	_itoa(atoi(argv[1]), s);
	puts(s);
	free(s);
}
