#include <stdio.h>

int main(void)
{
	int grades[3] = {8, 1, 4};
	int *ptr_grades = grades;

	printf("Address of pointer: %p\n", &ptr_grades);
	printf("Address of grades: %p\n", &grades);
	printf("Address of grades (in pointer): %p\n", ptr_grades);
	printf("First element in grades: %d\n", grades[0]);
	ptr_grades = &grades[0];
	printf("First element in grades (from pointer): %d\n", *ptr_grades);


	return (0);
}