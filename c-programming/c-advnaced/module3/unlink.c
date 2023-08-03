#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * main - my version of Unix's unlink command
 *
 * @argc: cmdline args counter.
 * @argv: cmdline args. expects a symbolic name
 *
 * Author: </>theLazyProgrammer^_^
 *
 * Return: 0 on success, non-zero on error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s path_to_link\n", argv[0]);
		return (-1);
	}

	struct stat st; /* instance of stat structure */

	if ((lstat(argv[1], &st) == 0) && S_ISLNK(st.st_mode))
	{
		if (unlink(argv[1]) != 0) /* unlinking fails */
		{
			fprintf(stderr, "[!] Link deletion failed.\n[!] %s\n",
					strerror(errno));
			return (-2);
		}
		/* on success */
		printf("[OK] Link '%s' deleted successfully.\n", argv[1]);
	}
	else
	{
		fprintf(stderr, "[!] Error: File does not exit\n");
		return (-3);
	}

	return (0);
}
