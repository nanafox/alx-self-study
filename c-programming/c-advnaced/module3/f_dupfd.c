#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - duplicating file descriptor...
 *
 * This enables you to operate one physical file from many different
 * logical places. This means these actions are done in parallel, or
 * in different threads
 *
 * In the body of the for loop, a condition is set to write all odd
 * letters to fd (file descriptor number 1) and even letters to
 * fd2 (file descriptor number 2)
 *
 * Return: 0
 */
int main(void)
{
	/* original file descriptor for physical file */
	int fd = open("test_file.txt", O_CREAT | O_TRUNC | O_WRONLY, 0644);

	if (fd > 0)
	{
		int fd2 = fcntl(fd, F_DUPFD, fd2); /* duplicate fd */

		if (fd2 > 0)
		{
			printf("fd=%d, fd2=%d\n", fd, fd2);
			for (int c = 'A'; c <= 'Z'; c++)
			{
				write(c % 2 ? fd : fd2, &c, 1); /* choose where to write to */
				printf("Writing to %s\n", c % 2 ? "fd" : "fd2");
			}
			write(fd, "\n", 1); /* add new line for legibility */
			close(fd2);
		}
		close(fd);
	}
	else
	{
		char error[] = "File creation failed!\n";

		write(2, error, sizeof(error)); /* write error to STDERR */
		return (-1);
	}

	return (0);
}
