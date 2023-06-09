#include <stdio.h>
#include "len.c"

/**
 * main - check length of strings
 *
 * Return: 0
 */
int main(void)
{
	char user_str[100];

	printf("Text: ");

	if (fgets(user_str, sizeof(user_str), stdin) != NULL)
		/*Ensure null-termination*/
		if (user_str[len(user_str) - 1] == '\n')
			user_str[len(user_str) - 1] = '\0';

	/*get the length of characters*/
	unsigned long long str_len = len(user_str);

	/*nicely print results*/
	if (str_len == 1)
		printf("\n%llu character long\n", str_len);
	else if (str_len > 1)
		printf("\n%llu characters long\n", str_len);
	else
		puts("\n0 characters");

	return (0);
}
