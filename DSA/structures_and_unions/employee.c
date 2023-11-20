#include "employee.h"

int main(void)
{
    employee emp1;

    emp1.name = malloc(sizeof("Maxwell"));
    strcpy(emp1.name, "Maxwell");
    emp1.id = 345;
    emp1.dept = malloc(sizeof("IT"));
    strcpy(emp1.dept, "IT");

    printf("Name: %s, ID: %d, Dept: %s\n", emp1.name, emp1.id, emp1.dept);

	free(emp1.name);
	free(emp1.dept);

    return 0;
}
