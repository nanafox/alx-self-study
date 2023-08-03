#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

/* nifty flags checking macro function */
#define check(val, flag) ((val & flag) && printf("\t" #flag "\n"))

/**
 * main - check the flags set for a file
 *
 * Return: 0
 */
int main(void)
{
	int fd = open("__file__.txt", O_WRONLY | O_CREAT | O_TRUNC | O_SYNC, 0666);

	if (fd > 0)
	{
		int flags = fcntl(fd, F_GETFL);

		printf("file=%s, fd=%d\n", "__file__.txt", fd);
		/* access mode */
		check(flags, O_WRONLY);
		check(flags, O_RDONLY);
		check(flags, O_RDWR);
		/* operating mode */
		check(flags, O_APPEND);
		check(flags, O_SYNC);
	}
	else
	{
		fprintf(stderr, "error: %s\n", strerror(errno));
		return (1);
	}
	return (0);
}
