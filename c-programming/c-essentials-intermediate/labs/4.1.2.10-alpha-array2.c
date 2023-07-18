#include <stdio.h>

/**
 * main - printing alphabets in descending order using only char variable types
 *
 * Return: 0
*/
int main(void)
{
	char alphabets[26]; /*alphabets array*/
	char c;

	/*fill array with alphabets*/
	for (c = 'a'; c <= 'z'; c++)
		alphabets[c - 'a'] = c; /*calculate the right index*/

	/*print alphabets in reversed order*/
	for (c = 'z'; c >= 'a'; --c)
		printf("%c", alphabets[c - 'a']);

	putchar('\n'); /*add a newline*/

	/*print great*/
	printf("%c", alphabets['g' - 'a']);
	printf("%c", alphabets['r' - 'a']);
	printf("%c", alphabets['e' - 'a']);
	printf("%c", alphabets['a' - 'a']);
	printf("%c\n", alphabets['t' - 'a']);

	return (0);
}
