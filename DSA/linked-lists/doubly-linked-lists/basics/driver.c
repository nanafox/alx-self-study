#include "dll.h"

/**
 * perform_insertions - performs multiple insertions into a list
 * @list: the list to insert into
 */
void perform_insertions(dll_t *list)
{
	/* insert some more */
	insert(list, 1, 4521);
	insert(list, 4, 1);
	insert(list, -3, 78);
	append(list, 100);
	insert(list, -4, 500);
	insert(list, 0, 128);

	/* print the updated list */
	puts("\nAfter insertion\n");
	print_list(list);
}

/**
 * perform_deletions - performs multiple deletions from a list
 * @list: the list to delete from
 */
void perform_deletions(dll_t *list)
{
	printf("\nElement [%d] was popped from the list\n", pop(list));
	puts("After pop operation\n");
	print_list(list);

	puts("\nRemoving data\n");
	rm(list, 5);
	print_list(list);

	printf("\nRemoving within the list\n");
	rm(list, 500);
	rm(list, 23);
	rm(list, 1024);

	print_list(list);
}

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

	perform_insertions(my_list);

	perform_deletions(my_list);

	/* we are done, clean up please */
	clear(my_list);

	return (0);
}
