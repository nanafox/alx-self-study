#include <stdio.h>
#include "change_case.c"

/**
 * main - changing cases
 *
 * Return: 0
 */
int main(void)
{
	char message[100] = "alice in wonderland";

	printf("Before: %s\n", message);
	/*change case*/
	to_title(message);
	printf("After: %s\n", message);

	return (0);
}
