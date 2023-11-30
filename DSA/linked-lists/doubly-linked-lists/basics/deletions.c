#include "dll.h"

/**
 * pop - removes the last element in a list
 * @list: the list to remove from
 *
 * Return: the data of the removed node
 */
int pop(dll_t *list)
{
	int data;
	node *temp_tail;

	if (check_err(list, 'l') == -1 || check_err(list->head, 'm') == -1)
		return (-1);

	/* save the data for later */
	data = list->tail->data;

	/* get hold of the last node */
	temp_tail = list->tail;

	/* adjust the pointers to remove the node */
	temp_tail->prev->next = NULL;
	list->tail = temp_tail->prev;

	/* clean up the memory used by the deleted node */
	list->cleanup((void **)&temp_tail);
	list->size--;

	return (data);
}

/**
 * rm - removes the first occurrence of an element from a list
 * @list: the list to remove from
 * @data: the data to remove
 *
 * Return: 0 on success, else -1 on failure
 */
int rm(dll_t *list, const int data)
{
	node *current;

	if (check_err(list, 'l') == -1 || check_err(list->head, 'm') == -1)
		return (-1);

	current = list->head;

	/* handle deletion at the beginning */
	if (list->head->data == data)
	{
		list->head = list->head->next;
		if (list->head != NULL)
			list->head->prev = NULL;
		else
		{
			list->head = NULL;
			list->tail = NULL;
		}
	}
	else
	{
		while (current != NULL && current->data != data)
			current = current->next;

		if (current == NULL || current->data != data)
		{
			fprintf(stderr, "'%d' not found in the list\n", data);
			return (-1);
		}

		if (current->prev != NULL)
			current->prev->next = current->next;

		if (current->next != NULL)
			current->next->prev = current->prev;
	}

	list->cleanup((void **)&current);
	list->size--;
	return (0);
}
