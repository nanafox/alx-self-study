#include <stdio.h>

/**
 * main - writing binary files
 *
 * Return: 0
*/
int main(void)
{
	FILE *file = fopen("data.bin", "wb");

	if (file == NULL)
	{
		fprintf(stderr, "File operation failed\n");
		return (-1);
	}

	int a = 10000;
	double b = 123.45;

	fprintf(stdout, "Writing %d to file...\n", a);
	fwrite(&a, sizeof(a), 1, file);

	fprintf(stdout, "Writing %.2f to file...\n\n", b);
	fwrite(&b, sizeof(double), 1, file);

	rewind(file);

	fprintf(stdout, "Reading %d from file...\n", a);
	fread(&a, sizeof(a), 1, file);

	fprintf(stdout, "Reading %.2f file file...\n", b);
	fread(&b, sizeof(double), 1, file);

	fclose(file);
	return (0);
}
