#include <stdio.h>
#include "employee.h"

/**
 * main - using C strutures
 *
 * Return: 0
 */
int main(void)
{
	employee emp1 = {"Maxwell Forson", 3421, "DevOps"};

	puts("Employee Info");
	printf("Name: %s\n", emp1.name);
	printf("Department: %s\n", emp1.dept);
	printf("ID: %d\n", emp1.id);

	/*getting emp2 from user input*/
	employee emp2;
	
	get_emp_info(&emp2);
	print_info(&emp2);
	
	return (0);
}
