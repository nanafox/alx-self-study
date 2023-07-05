#include "employee.h"
#include <stdio.h>

/**
 * main - working with array of strutures
 *
 * Return: 0
 */
int main(void)
{
	employee it_staff[3] = {
		{"John Doe", 3312, "DevOps"},
		{"Bob Sickle", 1230, "Server Admins"},
		{"Martha Gaines", 4923, "Developers"}
	};

	for (int i = 0; i < 3; i++)
		print_info(&it_staff[i]);
}
