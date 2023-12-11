#include "main.h"
#include <stdio.h>

/**
 * main - driver code to test shared library
 *
 * Return: 0
 */
int main(void)
{
	char *str = "maxwell";

	printf("%s\n", to_title(str));
	printf("%d\n", is_lower(str));
	printf("%d\n", is_lower(""));
	printf("%d\n", is_lower(NULL));
	printf("%d\n", is_lower("this Is not All Lowercase"));

	return (0);
}
