#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - random access writes
 *
 * Return: 0
 */
int main(void)
{
	int fd = open("numbers", O_CREAT | O_TRUNC | O_WRONLY, 0644);
	char c = 'A';

	if (fd > 0)
	{
		long n = lseek(fd, 6, SEEK_SET); /* set fp to index 6 */
		int wr = write(fd, &c, 1);		 /* write something there */

		printf("position: %ld, written: %d byte\n", n, wr);

		c = 'B';
		n = lseek(fd, -4, SEEK_END); /* move file pointer 4 steps back */
		wr = write(fd, &c, 1);		 /* write this at the current position */

		printf("position: %ld, written: %d byte\n", n, wr);

		c = 'C';
		n = lseek(fd, 0, SEEK_SET); /* move file pointer to beginning of file */
		wr = write(fd, &c, 1);		/* write this at the current position */

		printf("position: %ld, written: %d byte\n", n, wr);

		close(fd);
	}

	fd = open("numbers", O_RDONLY); /* open for writing */
	if (fd > 0)
	{
		printf("\nOutput: ");
		while (read(fd, &c, 1) > 0)
		{
			if (c == 0)
				putchar('0'); /* pad with zeros */

			putchar(c);
		}
	}
	putchar('\n');
}
