#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int str_cpy(const char *src, char *dest);

/**
 * main - copying strings and allocating memory
 *
 * Return: 0 for success, non-zero for failure
 */
int main(void)
{
	char *original = "Hello World!";
	char *copy = malloc(strlen(original) + 1);

	int success = str_cpy(original, copy);

	if (success)
	{
		printf("Original: %s\n", original);
		printf("Copy: %s\n", copy);

		return (0);
	}

	free(copy);

	return -1;
}

/**
 * str_cpy - string copy
 *
 * @src: Original string
 * @dest: Destination to copy original
 *
 * Return: 1 for success, 0 for failure
 */
int str_cpy(const char *src, char *dest)
{
	int i;
	if (dest != NULL)
	{
		for (i = 0; src[i] != '\0'; i++)
			dest[i] = src[i];
		dest[i] = '\0';

		return 1;
	}
	else
	{
		puts("Error: Null pointer received!");
		return 0;
	}
}
