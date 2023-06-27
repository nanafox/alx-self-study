#include <stdio.h>

/**
 * main - solution to exercise 4. (Hour 18)
 *
 * Command line arguments. Accepts no less than 2
 * command line arguments, program name not inclusive.
 *
 * @argc: number of cmdline arguments
 * @argv: array of individual cmdline arguments
 *
 * Return: 0 on success, else non-zero.
 */
int main(int argc, char *argv[])
{
	if (argc >= 3)
	{
		for (int i = 1; i < argc; i++)
			printf("%s\n", argv[i]);
		return (0);
	}
	else
	{
		puts("Usage: ./prog_name arg1 arg2 ...");
		return (1);
	}
}
