#include <stdio.h>

/**
 * main - a program to check the size of arrays and addresses of elements
 *
 * Return: 0
*/
int main(void)
{
	int num_of_grades = 5;
	int grades[num_of_grades];

	grades[0] = 5;
	grades[1] = 4;
	grades[2] = 3;
	grades[3] = 2;
	grades[4] = 1;

	printf("The size of int is %ld-byte long\n", sizeof(num_of_grades));
	printf("The array of 5 grades has a total of %ld bytes\n", sizeof(grades));
	printf("The address of the first element is: %p\n", &grades[0]);
	printf("The address of the last element is: %p\n",
		   &grades[num_of_grades - 1]);

	return (0);
}
