#include <stdio.h>
#include <string.h>

typedef struct Node
{
	int x;
	int y;
} Node;

int main(void)
{
	Node num1, num2;
	
	num1.x = 45;
	num1.y = 21;

	memcpy(&num2, &num1, sizeof(Node));

	printf("num1: x = %d, y = %d\n", num1.x, num1.y);
	printf("num2: x = %d, y = %d\n", num2.x, num2.y);
		
	return (0);
}
