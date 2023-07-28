#include <errno.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define BUFF_SIZE 1024000

/* fd_in, fd_out -> file descriptors for src/dest files.*/
static int fd_in = -1, fd_out = -1;

void error(int ret, char *fmt, ...);
void close_fds(void);

/**
 * main - my version of Linux's cp command.
 *
 * Copies only files, at the moment. Directories have not been
 * implemented yet.
 *
 * @argc: args counter
 * @argv: cmdline args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char buffer[BUFF_SIZE]; /* 1MB buffer size*/

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s source_file target_file\n", argv[0]);
		return (1);
	}
	atexit(close_fds); /* close files on exit */
	fd_in = open(argv[1], O_RDONLY);
	if (fd_in < 0)
		error(2, "Cannot open source file: %s", argv[1]);

	fd_out = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0644);
	if (fd_out < 0)
		error(3, "Cannot open target file: %s", argv[2]);

	int read_content;

	while ((read_content = read(fd_in, buffer, sizeof(buffer))) > 0)
	{
        /* copy action */
		int write_content = write(fd_out, buffer, read_content);

		if (write_content != read_content)
			error(4, "Error when writing %s", argv[2]);
	}

	/* extra error handling */
	if (read_content < 0)
		error(5, "Error while reading %s", argv[1]);
	if (close(fd_in) < 0)
		error(6, "Error while closing %s", argv[1]);
	fd_in = -1;
	if (close(fd_out) < 0)
		error(7, "Error while closing %s", argv[2]);
	fd_out = -1;

	return (0);
}

/**
 * close_fds - close file descriptors
 */
void close_fds(void)
{
	if (fd_in != -1)
		close(fd_in);
	if (fd_out != -1)
		close(fd_out);
}

/**
 * error - print error messages to stderr
 *
 * @id: error id
 * @fmt: format
 */
void error(int id, char *fmt, ...)
{
	char buf[512];
	va_list vlist;

	va_start(vlist, fmt);
	vsprintf(buf, fmt, vlist);
	va_end(vlist);
	fprintf(stderr, "ERROR: %s\n%s\n", buf, strerror(errno));
	exit(id);
}
