#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - failed file open operation: confirming returns
 *
 * Notes: if the third argument is omitted while creating the file
 * with O_CREAT, the file's permission is set 0000. Meaning no one
 * has access to the file. Not even the user.
 *
 * So adding that extra check is important. Also any file that can't be
 * opened with open() will cause an error and return -1. There insufficient
 * permissions could also cause operations to fail.
 *
 * Return: 0
 */
int main(void)
{
	char *filename = "file2.c";
	int fd = open(filename, O_RDONLY);

	printf("%d\n", fd);

	if (fd == -1)
	{
		printf("[!] File doesn't exist, creating file with name %s\n", filename);
		fd = open(filename, O_CREAT, 0644); /* rw-r-r */
	}
	puts("[OK] File exists...");
	close(fd);
}
