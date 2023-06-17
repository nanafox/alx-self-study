#include <stdlib.h>
#include <stdio.h>

/**
 * input - a minimal version of the getline() function
 *
 * @string: text from stdin
 * @len: size of string
 *
 * Return: string length
 */
int input(char *string, size_t len)
{
	register int c, i = 0; /*variables for fast processing*/

	/*accept string until newline character or EOF*/
	while (len > 0 && (c = getchar()) != EOF && c != '\n')
	{
		*string += c; /*update string value*/
		string++;	  /*get next byte*/
		i++;		  /*count characters*/
	}
	if (c == '\n') /*add newline character to string*/
		*string += c;

	*string += '\0'; /*add null-terminator*/

	return (i); /*string length*/
}

/**
 * main - getting user input
 *
 * Return: 0
 */
int main(void)
{
	int lim = 100;

	char c[lim];

	printf("Text: ");
	int d = input(c, lim);

	puts(c);
	printf("Size: %d\n", d);
}
