#include "lists.h"

/**
 * pop - removes the last element in a list and returns the removed data
 * @user_list: the list containing elements
 *
 * Return: the removed item or -1 on error
 */
int pop(list *user_list)
{
	node *current, *prev;
	int data;

	if (user_list->head == NULL)
	{
		fprintf(stderr, "List is empty!\n");
		return (-1);
	}

	current = user_list->head;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	data = current->data;
	user_list->tail = prev;
	user_list->tail->next = NULL;
	user_list->size--;

	if (user_list->size == 0)
	{
		user_list->head = NULL;
		user_list->tail = NULL;
	}

	free(current);
	current = NULL;

	return (data);
}
