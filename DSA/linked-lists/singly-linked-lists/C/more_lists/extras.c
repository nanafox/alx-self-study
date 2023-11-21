#include "lists.h"

/**
 * print_list - print the elements in a list
 * @user_list: the list to print elements from
 */
void print_list(list *user_list)
{
	node *current = user_list->head;

	if (current == NULL)
	{
		printf("List is empty\n");
		return;
	}

	while (current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
}
