#include <stdio.h>

/**
 * main - solution to ex21.2
 *
 * Return: 0 on success, nonzero on failure
*/
int main(void)
{
	char filename[20];
	char str[50];

	FILE *fptr_filename;

	printf("Filename: ");
	fgets(filename, 20, stdin);

	if ((fptr_filename = fopen(filename, "w")) != NULL)
	{
		printf("Text: ");
		fgets(str, 50, stdin);
		fputs(str, fptr_filename);
		fclose(fptr_filename);
	}
	else
	{
		puts("An error occurred");
		return (-1);
	}

	return (0);
}
