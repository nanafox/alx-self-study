#include <stdio.h>
#include <unistd.h>

/**
 * main - file stream
 *
 * Return: 0
*/
int main(void)
{
	puts("I/O Streams - fileno() perspective");
	printf("stdin:  %d\n", fileno(stdin));
	printf("stdout: %d\n", fileno(stdout));
	printf("stderr: %d\n", fileno(stderr));

	puts("\nI/O Streams - unistd.h perspective");
	printf("stdin:  %d\n", STDIN_FILENO);
	printf("stdout: %d\n", STDOUT_FILENO);
	printf("stderr: %d\n", STDERR_FILENO);

	return (0);
}
