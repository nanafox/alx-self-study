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
	printf("To base? (0 for all): ");
	scanf("%d", &base);

	putchar('\n');
	switch (base)
	{
		case 0: /*all base numeral conversions*/
			printf("Base 2 (Binary): ");
			to_base2(num);
			printf("Base 8 (Octal):  ");
			to_base8(num);
			printf("Base 16 (Hex):   ");
			to_base16(num);
			break;

		case 2: /*binary*/
			printf("Base 2 (Binary): ");
			to_base2(num);
			break;

		case 8: /*octal*/
			printf("Base 8 (Octal):  ");
			to_base8(num);
			break;

		case 16: /*hexadecimal*/
			printf("Base 16 (Hex):   ");
			to_base16(num);
			break;

		default:
			puts("Did not receive a valid base to convert to.");
	}

	return (0);
}
