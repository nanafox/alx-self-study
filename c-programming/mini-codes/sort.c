#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(FILE *src, FILE *dest);

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		puts("usage: ./sort src_file dest_file");
		return (-1);
	}

	FILE *src = fopen(argv[1], "r");
	if (src == NULL)
	{
		fprintf(stderr, "%s: %s\n", argv[1], strerror(errno));
		return (-errno);
	}

	FILE *dest = fopen(argv[2], "w");
	if (dest == NULL)
	{
		fprintf(stderr, "%s: %s\n", argv[1], strerror(errno));
		return (-errno);
	}
	/*call sorting function*/
	sort(src, dest);

	return (0);
}

/**
 * sort - sorts numbers in a file and saves the results to another file
 *
 * @src: source file. Must exist
 * @dest: destination file.
 */
void sort(FILE *src, FILE *dest)
{
	int *numbers = malloc(sizeof(int));
	int temp, len, i, j;

	/*dynamically allocate array size*/
	for (len = 0; fscanf(src, "%d", &numbers[len]) == 1; len++)
		numbers = realloc(numbers, (sizeof(int) * (len + 2)));

	fclose(src);
	/*perform sort*/
	puts("Sorting...");
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < len; i++)
	{
		/*fprintf(stdout, "%s - %ld\n", "Current position", ftell(dest));*/

		/*write to file*/
		fprintf(dest, "%d\n", numbers[i]);
	}
	free(numbers);
	fclose(dest);
	puts("\nDone...");
}
