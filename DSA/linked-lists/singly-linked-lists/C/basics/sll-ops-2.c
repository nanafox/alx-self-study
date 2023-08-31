#include "../node.h"
#include "sll-ops.h"
#include <stdlib.h>

/**
 * del_index - delete node at a given index
 *
 * @head: head
 * @index: index to delete
 *
 * Return: head
 */
Node *del_index(Node *head, int index)
{
	Node *prev, *cur;
	int i = 0;

	cur = head;
	if (index == 0)
		return (del_head(head));

	while ((cur != NULL) && (i < index))
	{
		prev = cur;
		cur = cur->next;
		i++;
	}
	if (err_chk(cur, NOT_FOUND))
		err_msg(NOT_FOUND);
	else
	{
		/*
		 * move previous node's next pointer to point to the next pointer of the
		 * node to be deleted and release memory
		 */
		prev->next = cur->next;
		free(cur);
		cur = NULL;
	}
	return (head);
}

/**
 * del_list - delete the entire list
 *
 * @head: head
 *
 * Return: head (empty)
 */
Node *del_list(Node *head)
{
	Node *temp, *cur;

	cur = head;
	while (cur != NULL)
	{
		temp = cur->next;
		free(cur);
		cur = temp;
	}
	head = NULL;
	return (head);
}
