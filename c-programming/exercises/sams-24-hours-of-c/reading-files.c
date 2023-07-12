#include <stdio.h>

int main(void)
{
	FILE *fptr;
	unsigned int exists = 0, non_existent = 0;

	char filename[][15] = {"addrs-of.c", "addr-of.c", "employee.h"};

	for (int i = 0; i < 3; i++)
	{
		if ((fptr = fopen(filename[i], "r")) == NULL)
		{
			printf("Can't open file... probably '%s' doesn't exist\n", filename[i]);
			++non_existent;
		}
		else
		{
			printf("%s exists\n", filename[i]);
			++exists;
			fclose(fptr);
		}
	}

	puts("\nSummary...");
	printf("Valid files: %u\n", exists);
	printf("Invalid file: %u\n\n", non_existent);

	/*using fputc and the stdout stream*/
	fputc('A', stdout);
	fputc('\n', stdout);
	
	return (0);
}
