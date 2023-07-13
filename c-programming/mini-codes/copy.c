#include <errno.h>
#include <stdio.h>
#include <string.h>

/**
 * main - copy contents of file
 *
 * @argc: argument counter
 * @argv: cmdline arguments. Requires only 2, source and destination filenames
 *
 * Return: 0 on success, nonzero on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("usage: ./copy src dest");
		return (-1);
	}

	FILE *src = fopen(argv[1], "r");

	if (src == NULL)
	{
		printf("%s: %s\n", argv[1], strerror(errno));
		return (-errno);
	}

	FILE *dest = fopen(argv[2], "w");

	if (dest == NULL)
	{
		printf("%s: %s\n", argv[1], strerror(errno));
		return (-errno);
	}

	char buff[148];

	while ((fgets(buff, 148, src)) != NULL)
		fputs(buff, dest);

	fclose(src);
	fclose(dest);

	return (0);
}
