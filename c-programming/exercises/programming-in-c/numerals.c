#include "base_conversions.c"

/**
 * main - convert to base X.
 *
 * Return: 0
*/
int main(void)
{
	int num, base;

	printf("Number to convert: ");
	scanf("%d", &num);
	printf("To base? ");
	scanf("%d", &base);

	putchar('\n');
	switch (base)
	{
		case 2: /*binary*/
			printf("Base 2 (Binary): ");
			to_base2(num);
			break;

		case 16: /*hexadecimal*/
			printf("Base 16 (Hex):   ");
			to_base16(num);
			break;

		default:
			puts("Did not receive receive base to convert to.");
	}

	return (0);
}
