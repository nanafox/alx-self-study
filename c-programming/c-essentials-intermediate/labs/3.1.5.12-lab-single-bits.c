#include <stdio.h>

void print_nibble(int n);

/**
 * main - start here
 *
 * Breaks a number into nibbles and prints the corresponding
 * decimal value at that position.
 *
 * Return: 0
 */
int main(void)
{
	int num;

	printf("Number: ");
	scanf("%d", &num);

	if (num >= 0 && num <= 255)
		print_nibble(num);
	else
		puts("Number is too high or too low");
	return (0);
}

/**
 * print_nibble - print decimal parts of a nibble
 *
 * @n: number
 */
void print_nibble(int n)
{
	printf("H nibble: %d\n", n >> 0x4);
	printf("L nibble: %d\n", n & 0xF);
}
