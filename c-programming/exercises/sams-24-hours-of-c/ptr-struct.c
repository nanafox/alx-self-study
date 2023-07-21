#include <stdio.h>
#include <stdlib.h>
#include "employee.h"

/**
 * main - pointers and structures
 *
 * Return: 0
 */
int main(void)
{
	int no_of_emps;

	printf("Number of employees: ");
	scanf("%d", &no_of_emps);
	getchar();

	employee *emps = malloc(no_of_emps * sizeof(employee));

	for (int i = 0; i < no_of_emps; i++)
	{
		printf("\nEnter details for Employee #%d\n", i + 1);
		get_emp_info(&emps[i]);
	}

	puts("\nEmployee Info\n=============");
	for (int i = 0; i < no_of_emps; i++)
	{
		print_info(&emps[i]);
		putchar('\n');
	}
	free(emps);
	emps = NULL;

	return (0);
}
