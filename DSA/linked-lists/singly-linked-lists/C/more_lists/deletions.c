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

/**
 * rm - removes a the first occurrence of the element from a list
 * @user_list: the list to remove from
 * @data: the element to remove
 *
 * Return: 0 on success, else -1 on error
 */
int rm(list *user_list, const int data)
{
	node *current = NULL, *prev = NULL;

	if (user_list->head == NULL || user_list == NULL)
	{
		fprintf(stderr, "List is empty or uninitialized\n");
		return (-1); /* nothing to remove */
	}

	current = user_list->head;
	while (current != NULL)
	{
		if (current->data == data)
		{
			if (current == user_list->head)
				user_list->head = user_list->head->next;
			else
				prev->next = current->next;

			/* clean up memory for old node */
			user_list->cleanup((void **)&current);
			return (0); /* element removal worked */
		}
		prev = current;
		current = current->next;
	}

	return (-1);
}

