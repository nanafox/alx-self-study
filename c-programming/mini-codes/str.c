#include <stdio.h>
#include "len.c"

/**
 * main - check length of strings
 *
 * Return: 0
*/
int main(void)
{
	int size = 100;
	char x[size];

	printf("Text: ");
	scanf("%[^\n]%*c", x);

	unsigned long long str_len = len(x);

	if (str_len == 1)
		printf("\n%llu character long\n", str_len);
	else if (str_len > 1)
		printf("\n%llu characters long\n", str_len);
	else
		puts("\n0 characters");

	return (0);
}

