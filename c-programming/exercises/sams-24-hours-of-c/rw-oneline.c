#include <errno.h>
#include <stdio.h>

/**
 * main - writing to file, one line at a time
 *
 * Return: 0 on success, nonzero on failure
 */
int main(void)
{
	FILE *fptr_1, *fptr_2;

	char original[] = "employee.h";
	char copy[] = "copy_of_employee.h";

	if ((fptr_1 = fopen(original, "r")) == NULL)
	{
		switch (errno)
		{
			case ENOENT:
				printf("%s does not exist.\n", original);
				return (-1);
			default:
				printf("%s couldn't be opened for reading.\n", original);
				return (-1);
		}
	}
	else if ((fptr_2 = fopen(copy, "w")) == NULL)
	{
		switch (errno)
		{
			case ENOSPC:
				puts("Not enough space to create file.");
				return (-1);
			default:
				printf("%s couldn't be opened for writing\n", copy);
				return (-1);
		}
	}
	else
	{
		char buff[81];
		printf("Writing contents of %s to %s\n", original, copy);
		while ((fgets(buff, 81, fptr_1)) != NULL)
			fputs(buff, fptr_2);
	}

	puts("Writing done... Closing now");

	fclose(fptr_1);
	fclose(fptr_2);
}
