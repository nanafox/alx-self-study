#include <stdio.h>

/**
 * main - a simple use of the freopen() function
 *
 * Return: 0
 */
int main(void)
{
	FILE *the_file = freopen("from_stdout.txt", "w", stdout);

	if (the_file == NULL)
	{
		fprintf(stderr, "An error occurred while opening file\n");
		return (-1);
	}

	printf("This text will be saved in the file, and won't be shown on the "
		   "terminal\n");
	printf("It was redirected... This is similar to doing using the '>' "
		   "redirection operator in Linux\n");
	printf("Something like doing: echo \"Hello, world\" > some_file.txt\n");

	return (0);
}
