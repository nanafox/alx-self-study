#include <errno.h>
#include <stdio.h>

/**
 * main - reading files with fread()
 *
 * @argc: argument counter
 * @argv: list of arguments. Requires only 1, a filename.
 *
 * Return: 0 on success, nonzero on error
*/
int main(int argc, char *argv[])
{
	FILE *inp;
	int chr;
	unsigned int buff_size = 1024;
	unsigned char buffer[buff_size]; /*a kilobyte*/

	/* check if there is one argument */
	if (argc != 2)
	{
		printf("usage: ./read-file file_name\n");
		return (-1);
	}
	inp = fopen(argv[1], "r");

	/* check if we are able to open the input file */
	if (inp == NULL)
	{
		switch (errno)
		{
			case EACCES:
				printf("%s: Access denied, can't read from file.\n", argv[1]);
				return (-EACCES);
			case EISDIR:
				puts("Can print the contents of a directory.");
				return (-EISDIR);
			case ENOENT:
				printf("%s: File does not exist.\n", argv[1]);
				return (-ENOENT);
			default:
				printf("Cannot open the file %s\n", argv[1]);
				return (-errno);
		}
	}

	while (!feof(inp))
	{
		chr = fread(buffer, sizeof(char), buff_size, inp);
		buffer[chr] = '\0'; /*for easier printing*/
		printf("%s", buffer);
	}

	/* close the stream */
	fclose(inp);
	return (0);
}
