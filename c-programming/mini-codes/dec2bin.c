#include <stdio.h>
#include <stdlib.h>

/**
 * main - decimal to binary conversion
 *
 * Return: 0
*/
int main(void)
{
	int n, i = 0;
	int *bin = malloc(sizeof(int));

	printf("Decimal to Binary: ");
	scanf("%d", &n);
	printf("Decimal: %d\n", n);

	if (bin == NULL)
	{
		fprintf(stderr, "Memory allocation failed!\n");
		return (-1);
	}

	/* get binary number */
	do {
		bin[i] = n % 2;
		n /= 2;
		i++;
		bin = realloc(bin, sizeof(int) * (i + 1)); /* increase memory */
	} while (n != 0);

	/*print the result of binary conversion*/
	printf("Binary: ");
	for (--i; i >= 0; --i)
		printf("%d", bin[i]);
	putchar('\n');

	free(bin);
}
