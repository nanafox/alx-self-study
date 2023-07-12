#include <stdio.h>

/**
 * main - Ex21.1-solution: printing from file and counting characters.
 *
 * Return: 0
 */
int main(void)
{
	char filename[] = "haiku.txt";
	FILE *fptr = fopen(filename, "r");
	unsigned int chars = 0;

	if (fptr != NULL)
	{	
		int c;
		while ((c = fgetc(fptr)) != EOF)
		{
			++chars;
			putchar(c);
		}
	}
	else
	{
		printf("Error: %s could not be opened for reading.\n", filename);
		return (-1);
	}

	fclose(fptr);
	printf("\nCharacters: %u\n", chars);

	return (0);
}
