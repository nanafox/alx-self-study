#include <stdio.h>

void auto_static(void);
void auto_not_so_static(void);

/**
 * main - testing auto and static variables
 *
 * Return: 0
 */
int main(void)
{
	puts("Screwed Static Variable");
	for (int i = 0; i < 5; i++)
		auto_not_so_static();

	puts("\nReal use of static variable");
	for (int i = 0; i < 5; i++)
		auto_static();

	return (0);
}

/**
 * auto_static - showing the real differnce between auto and static variables
 */
void auto_static(void)
{
	int auto_var = 1;
	static int static_var = 1;

	printf("auto variable: %d, static variable: %d\n",
			auto_var, static_var);

	++auto_var;
	++static_var;
}

/**
 * auto_not_so_static - defeating the purpose of static variable variables
 *
 * Description: When a variable of storage class static is reassigned, it's
 * whole purpose is defeated. This is because the variable is redefined each
 * time the function is invoked. In essence, it reduces the static variable
 * to its auto counterpart, defeating the whole idea of static variables.
 *
 * Meanwhile, static variables are supposed to be defined once and used each
 * time the function is called. This original way ensures that the previous
 * value from the last invocation is returned.
 */
void auto_not_so_static(void)
{
	int auto_var; /*garbage value*/
	static int not_so_static_var; /*zeros as default value*/

	auto_var = 1;
	/*reassignment - defeats the purpose of static variables*/
	not_so_static_var = 1;

	printf("auto variable: %d, not so static variable: %d\n",
			auto_var, not_so_static_var);

	++auto_var;
	++not_so_static_var;
}
