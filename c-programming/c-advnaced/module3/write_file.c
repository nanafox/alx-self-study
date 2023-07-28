#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define N 15

/**
 * main - writing to file
 *
 * Return: 0
 */
int main(void)
{
	char languages[][N] = {"Python\n", "Javascript\n", "C++\n", "C Sharp\n",
							"Typescript\n", "Java\n"};

	int out = open("langs.bin", O_CREAT | O_TRUNC | O_WRONLY, 0644);

	if (out > 0)
	{
		int n = write(out, languages, sizeof(languages));

		printf("%d bytes written\n", n);
		close(out);
	}

	return (0);
}
