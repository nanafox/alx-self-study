#include "lists.h"

/**
 * print_list - print the elements in a list
 * @user_list: the list to print elements from
 */
void print_list(list *user_list)
{
	node *current;

	if (user_list == NULL)
	{
		printf("List not initialized\n");
		return;
	}
	if (user_list->size == 0)
	{
		printf("List is empty\n");
		return;
	}

	current = user_list->head;
	while (current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
}

/**
 * clear - clears the list
 * @user_list: the list to clear
 */
void clear(list *user_list)
{
	node *current;

	if (user_list == NULL)
	{
		printf("List not initialized\n");
		return;
	}
	if (user_list->size == 0)
	{
		printf("List is already empty\n");
		return;
	}

	while (user_list->head != NULL)
	{
		current = user_list->head;
		user_list->head = user_list->head->next;

		user_list->cleanup((void **)&current);
		current = NULL;
		user_list->size--;
	}

	user_list->head = NULL;
	user_list->tail = NULL;
	user_list->size = 0;
	user_list->cleanup = NULL;

	_free((void **)&user_list);
}

/**
 * _free - frees dynamic memory
 * @ptr: a pointer to the memory location that needs to be freed
 */
void _free(void **ptr)
{
	if (*ptr != NULL && ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
	}
}
