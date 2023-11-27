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

	return (data);
}

int rm(dll_t *list, const int data)
{
	node *current;

	if (check_err(list, 'l') == -1 || check_err(list->head, 'm') == -1)
		return (-1);

	if (list->head->data == data)
	{
		current = list->head;
		list->head = list->head->next;
		if (list->head != NULL)
			list->head->prev = NULL;
	
		list->cleanup((void **)&current);
		return (0);
	}

	/* deleting somewhere in the list */

	return (-1);
}
