#include <stdio.h>
#include <stdlib.h>

/**
 * main - memory on demand lab solution.
 *
 * Return: 0
*/
int main(void)
{
	char *alphabets;

	/*allowed range - up to 1MB*/
	unsigned int threshold = 1024 * 1024;

	/*ask user for number of characters*/
	unsigned int size;

	printf("How many alphabets do you want to store: ");
	scanf("%u", &size);

	/*confirm number of characters is within the accepted threshold*/
	if (size >= 0 && size < threshold)
		alphabets = malloc(size * sizeof(char));
	else
	{
		puts("Too much memory requested");
		return (1);
	}

	/*fill array with alphabets*/
	for (int i = 0; i < size; i++)
		alphabets[i] = 'A' + (i % 26); /*sleekier*/

	/*print the alphabets, 40 characters on each line*/
	for (int i = 0; i < size; i++)
		(i == 0 || i % 40 == 0) ? printf("\n%c", *(alphabets + i))
								: printf("%c", *(alphabets + i));
	putchar('\n');

	return (0);
}

/*
 * verbose version -> fill array with alphabets
 *	char letter = 'A' -> declared outside loop
 *
 *  for (int i = 0; i < size; i++)
 *	{
 * 		if (i == 0 || i % 26 != 0)
 *			alphabets[i] = letter++;
 *		else
 *		{
 *			letter = 'A';
 *			alphabets[i] = letter++;
 *		}
 * 	}
 */
