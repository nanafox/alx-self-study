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

	/* print current list */
	puts("List content\n");
	print_list(my_list);

	/* insert some more */
	insert(my_list, 1, 4521);
	insert(my_list, 4, 1);
	insert(my_list, -3, 78);
	append(my_list, 100);
	insert(my_list, -4, 500);

	/* print the updated list */
	puts("\nAfter insertion\n");
	print_list(my_list);

	puts("\nAfter pop operation\n");
	printf("Element [%d] was popped from the list\n", pop(my_list));
	print_list(my_list);

	puts("\nRemoving data\n");
	rm(my_list, 5);
	print_list(my_list);

	/* we are done, clean up please */
	clear(my_list);

	return (0);
}
