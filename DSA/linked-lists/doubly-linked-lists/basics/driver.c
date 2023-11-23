#include "dll.h"

/**
 * main - a driver code to test doubly linked list operations
 *
 * Return: 0
 */
int main(void)
{
	dll_t *my_list = init(_free);
	int i, elements[10] = {5, 3, 23, 6, 12, 9, 22, 90, 44, 15};

	for (i = 0; i < 10; i++)
	{
		if (append(my_list, elements[i]) == -1)
		{
			fprintf(stderr, "Couldn't insert data\n");
			break;
		}
	}

	insert(my_list, 1, 4521);
	insert(my_list, 4, 1);
	insert(my_list, 8, 9);
	print_list(my_list);
	clear(my_list);

	return (0);
}
