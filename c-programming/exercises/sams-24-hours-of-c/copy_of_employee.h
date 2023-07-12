#ifndef _employee_h
#define _employee_h

#include <string.h>
#include <stdio.h>

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
 * _fgets - fgets wrapper to remove newline character
 * @str: string
 * @len: size of string
 *
 * Return: void. Exits on error.
 */
void _fgets(char *str, int len)
{
	if (fgets(str, len, stdin) == NULL)
		return;
	str[strcspn(str, "\n")] = '\0';
}
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
	_fgets(emp_obj->name, 30);
	printf("Department: ");
	_fgets(emp_obj->dept, 20);
	printf("ID: ");
	scanf("%d", &emp_obj->id);
	getchar(); /*handle newline issues*/
}

/**
 * print_info - prints employee data
 *
 * @emp_obj: array instance of employee structure
 */
void print_info(employee *emp_obj)
{
	printf("Name: %s\n", emp_obj->name);
	printf("Dept: %s\n", emp_obj->dept);
	printf("ID: %03d\n", emp_obj->id);
}

#endif
