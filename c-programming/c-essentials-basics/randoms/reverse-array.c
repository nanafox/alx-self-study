#include <stdio.h>

int main(void)
{
	int i, size = 5;
	int grades[] = {87, 90, 76, 100, 89};

	for (i = size -1; i >= 0; i--)
		printf("%d ", grades[i]);
	putchar('\n');
}
