#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - readlink
 *
 * @argc: argc counter
 * @argv: cmdline args. expects link name
 *
 * Return: 0 on success, non-zero on error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s link_name\n", argv[0]);
		return (-1);
	}
	char real_name[512];
	int len = readlink(argv[1], real_name, sizeof(real_name) - 1);

	if (len > 0)
	{
		real_name[len] = '\0';
		printf("%s is linked to %s\n", argv[1], real_name);
	}

	else
	{
		fprintf(stderr, "Error: %s\n", strerror(errno));
		return (-2);
	}

	return (0);
}
