#include <stdio.h>
#include <string.h>

/**
 * main - Solution to lab 4.1.10.10 - Printing palindromes
 *
 * Return: 0
 */
int main(void)
{
	int size = 100;
	char original_word[size];
	char palindrome[size];

	scanf("%s", original_word);

	for (int i = strlen(original_word) - 1, j = 0; i >= 0; i--, j++)
	{
		palindrome[j] = original_word[i]; /*append letters in reverse*/
	}

	printf("%s\n", palindrome);

	return (0);
}
