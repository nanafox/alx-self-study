#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#define ROW 6
#define COL 15

/**
 * main - reading from file
 *
 * Return: 0
*/
int main(void)
{
	char langs[ROW][COL];

	int fd = open("langs.bin", O_RDONLY);

	if (fd > 0)
	{
		int lines = read(fd, langs, sizeof(langs));
		printf("%d bytes read in\n\n", lines);
		close(fd);
	}

	for (int i = 0; i < ROW; i++)
		printf("%s", langs[i]);

	return (0);
}
