#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFF_SIZE 10240

void chk_file_ops(int fd);

/**
 * main - creating a CSV file from the passwd file
 *
 * Return: 0
 */
int main(void)
{
	int in = open("passwd", O_RDONLY);

	chk_file_ops(in);
	int out = open("passwd.csv", O_CREAT | O_TRUNC | O_WRONLY, 0644);

	chk_file_ops(out);
	char buff[BUFF_SIZE];

	read(in, buff, BUFF_SIZE);
	char *token = strtok(buff, ":");

	while (token)
	{
		token = strtok(NULL, ":");
		dprintf(out, "%s,", token);
	}
	putchar('\n');

	close(in);
	close(out);
}

/**
 * chk_file_ops - handle file operation errors
 *
 * @fd: file descriptor
 */
void chk_file_ops(int fd)
{
	char *err = "error: file operation failed!";

	if (fd < 0)
	{
		write(2, err, sizeof(err));
		exit(1);
	}
}
