#include <errno.h>
#include <stdio.h>

/**
 * main - solution to lab 7.1.8.6
 *
 * Task: Write a program that copies itself and adds line numbers to each line.
 *
 * @argc: argument counter
 * @argv: cmdline args. requires 2, source and destination filenames.
 *
 * Return: 0 on success, else nonzero
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "usage: ./prog_name src dest\n");
		return (-1);
	}

	FILE *src = fopen(argv[1], "r");

	if (src == NULL)
	{
		switch (errno)
		{
			case EACCES:
				fprintf(stderr, "%s: %s\n", argv[1], "Access denied");
				return (-EACCES);
			default:
				fprintf(stderr, "%s: %s\n", "Error: can't open file", argv[1]);
				return (-errno);
		}
	}

	FILE *dest = fopen(argv[2], "w");

	if (dest == NULL)
	{
		fprintf(stderr, "%s: %s\n", argv[2],
				"Error: File creation couldn't complete");
		return (-errno);
	}

	char buff[128];

	for (int i = 1; fgets(buff, 128, src) != NULL; i++)
		fprintf(dest, "%d. %s", i, buff);

	fclose(src);
	fclose(dest);

	return (0);
}
