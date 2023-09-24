#include "postfix.h"
#include <stdio.h>

/**
 * main - driver code to test postfix implementation
 *
 * Return: 0
 */
int main(void)
{
	float result;
	int i;
	char expressions[][10] = {
		{"62/"}, {"23*54*+9-"},
		{"33*4+"}, {"54+3/"}
	};

	for (i = 0; i < 4; i++)
	{
		result = postfix(expressions[i]);
		printf("Postfix experession: %s\nResult: %g\n", expressions[i], result);
	}
	return (0);
}
