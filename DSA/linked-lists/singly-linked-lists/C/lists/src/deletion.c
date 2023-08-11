#include "../headers/operations.h"
#include <stdio.h>

/**
 * del - delete the first occurrence of an element in the list
 *
 * @head: pointer to pointer of head node
 * @data: value to delete
 */
void del(Node **head, int data)
{
	Node *cur = *head;
	Node *prev = *head;

	while (cur != NULL)
	{
		if (cur->data == data)
		{
			if (cur == *head)
				*head = cur->next;
			else
				prev->next = cur->next;
			break;
		}
		prev = cur;
		cur = cur->next;
	}
}

/**
 * del_all - delete all occurrences of data in the linked list
 *
 * @head: pointer to pointer of head of node
 * @data: value to be removed
 */
void del_all(Node **head, int data)
{
	Node *cur = *head;
	Node *prev = *head;

	if (*head == NULL)
		return;
	while (cur != NULL)
	{
		if (cur->data == data)
		{
			if (cur == *head)
				*head = cur->next;
			else
				prev->next = cur->next;
		}
		prev = cur;
		cur = cur->next;
	}
}
