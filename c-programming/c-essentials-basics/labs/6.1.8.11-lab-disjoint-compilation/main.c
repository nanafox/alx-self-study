#include "triangles.h"
#include <stdio.h>

int main(void)
{
	int size;
	
	printf("Size: ");
	scanf("%d", &size);

	puts("\nNormal Right-angled triangle with slashes");
	normal_triangle(size);
	puts("\nFloyd's Triangle");
	floyds_triangle(size);
}
