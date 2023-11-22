#include "dll.h"

/**
 * main - a driver code to test doubly linked list operations
 *
 * Return: 0
 */
int main(void)
{
	dll_t *my_list = init(_free);
	node *tmp;
	int i, elements[10] = {5, 3, 23, 6, 12, 9, 22, 90, 44, 15};

	if (my_list == NULL)
		return (-1);

	for (i = 0; i < 10; i++)
	{
		if (append(my_list, elements[i]) == -1)
		{
			fprintf(stderr, "Couldn't insert data");
			break;
		}
	}

	tmp = my_list->head;
	i = 0;
	while (tmp != NULL)
	{
		printf("[%d]: %d\n", ++i, tmp->data);
		tmp = tmp->next;
	}
	printf("Size of List: %lu\n", my_list->size);

	/* free memory for the list */
	while (my_list->head != NULL)
	{
		tmp = my_list->head;
		my_list->head = my_list->head->next;

		my_list->cleanup((void **)&tmp);
	}
	my_list->cleanup((void **)&my_list);

	return (0);
}
