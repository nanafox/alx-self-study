#include <stdio.h>

/**
 * main - writing to file, one character at a time
 *
 * Return: 0 on sucess, nonzero on failure
 */
int main(void)
{
	FILE *fptr_1, *fptr_2;

	char original[] = "addr-of.c";
	char copy[] = "copy_of_addr-of-c.c";

	if ((fptr_1 = fopen(original, "r")) == NULL)
	{
		printf("%s couldn't be opened for reading.\n", original);
		return (-1);
	}
	else if ((fptr_2 = fopen(copy, "w")) == NULL)
	{
		printf("%s couldn't be opened for writing\n", copy);
		return (-1);
	}
	else
	{
		int c;
		printf("Writing contents of %s to %s\n", original, copy);
		while ((c = fgetc(fptr_1)) != EOF)
			fputc(c, fptr_2);
		fputc('\n', fptr_2); /*add a newline at the end*/
	}

	puts("Writing done... Closing now");

	fclose(fptr_1);
	fclose(fptr_2);
}
