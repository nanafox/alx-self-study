#include <stdio.h>

#ifndef _employee_h
#define _employee_h
/**
 * struct employee - minimal employee structure
 * @name: name of employee
 * @id: employee ID
 * @dept: Department
 */
typedef struct employee
{
	char name[30];
	int id;
	char dept[20];
} employee;

/**
 * get_emp_info - a structure for getting employee data
 *
 * @emp_obj: an instance of the employee structure
 *
 * Return: emp_obj.
 */
void get_emp_info(employee *emp_obj)
{
	printf("\nName: ");
	fgets(emp_obj->name, 30, stdin);
	printf("Department: ");
	fgets(emp_obj->dept, 20, stdin);
	printf("ID: ");
	scanf("%d", &emp_obj->id);
}

/**
 * print_info - prints employee data
 *
 * @emp_obj: instance of employee structure
 */
void print_info(employee *emp_obj)
{
	printf("%s\n", emp_obj->name);
	printf("\tDept: %s\n", emp_obj->dept);
	printf("\tID: %d\n", emp_obj->id);
}
#endif
