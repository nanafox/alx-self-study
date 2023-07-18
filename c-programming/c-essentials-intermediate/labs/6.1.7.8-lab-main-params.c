#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - using command-line arguments, passing parameters to main()
 *
 * @argc: arguments counter
 * @argv: cmdline arguments
 *
 * Return: 0 if success, 1 if otherwise
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		puts("usage: ./prog_name {add|mul|sub} num1 num2");
		return (1); /*incomplete params*/
	}

	int result;
	char action[4];
	int num1 = atoi(argv[2]);
	int num2 = atoi(argv[3]);

	strcpy(action, argv[1]); /*arithmetic operation*/

	if (!strcmp(action, "add"))
		result = num1 + num2;
	else if (!strcmp(action, "mul"))
		result = num1 * num2;
	else if (!strcmp(action, "sub"))
		result = num1 - num2;
	else
	{
		puts("Invalid action received!");
		return (1);
	}

	printf("%s %d %d: %d\n", action, num1, num2, result);
}
