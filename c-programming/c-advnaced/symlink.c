#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - creating symbolic links at the API level
 *
 * @argc: args counter
 * @argv: expects two arguments: target and link_name
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s target link_name\n", argv[0]);
		return (-1);
	}

	/* create a symbolic link to this file*/
	int n = symlink(argv[1], argv[2]);

	if (n < 0)
	{
		fprintf(stderr, "[!] An error ocurred while creating link\n[!] %s\n",
				strerror(errno));
		return (-1);
	}

	printf("[OK] Link to %s created\n", argv[1]);
	printf("[OK] Link name %s.\n", argv[2]);

	return (0);
}
