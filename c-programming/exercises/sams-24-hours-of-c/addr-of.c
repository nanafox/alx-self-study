#include <stdio.h>

int main(void)
{
	char x;
	int y;
	float z;

	puts("Address(Left values)");
	printf("x: Address=%p Content=%c\n", &x, x);
	printf("y: Address=%p Content=%d\n", &y, y);
	printf("z: Address=%p Content=%.2f\n", &z, z);

	x = 'X';
	y = 75;
	z = 3.14;

	puts("\nAddress and Content (right values)");
	printf("x: Address=%p Content=%c\n", &x, x);
	printf("y: Address=%p Content=%d\n", &y, y);
	printf("z: Address=%p Content=%.2f\n", &z, z);
}