#include <stdio.h>

void read_line(FILE *file);

/**
 * main - random access
 *
 * Return: 0 on success, nonzero on error
*/
int main(void)
{
	FILE *file = fopen("LaoZou.txt", "r");

	if (file == NULL)
	{
		fprintf(stderr, "Can't open file.\n");
		return (-1);
	}

	puts("---Original text and format...\n");
	int offset1 = ftell(file);

	read_line(file);

	int offset2 = ftell(file);

	read_line(file);

	int offset3 = ftell(file);

	read_line(file);

	puts("\n---Reversed printing...\n");
	fseek(file, offset3, SEEK_SET);
	read_line(file);

	fseek(file, offset2, SEEK_SET);
	read_line(file);

	/*fseek(file, offset1, SEEK_SET) - for exercise 1*/
	rewind(file); /*updated for exercise 2*/
	read_line(file);

	fclose(file);

	return (0);
}

/**
 * read_line - reads a line a from a file and prints it
 *
 * @file: file to read from
*/
void read_line(FILE *file)
{
	char str[50];

	fgets(str, 50, file);
	printf("%s", str);
}
