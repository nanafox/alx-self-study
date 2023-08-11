#include "../headers/operations.h"
#include <stdio.h>
#include <malloc.h>

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
			free(cur);
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
	Node *prev = NULL;

	if (*head == NULL)
	{
		printf("List is empty...\n");
		return;
	}

	while (cur != NULL)
	{
		if (cur->data == data) /* match found */
		{
			Node *next_node = cur->next;

			free(cur); /* free memory */

			if (prev == NULL)
			{
				/* update head and move current to new head */
				*head = next_node;
				cur = next_node;
			}
			else
			{
				prev->next = next_node; /* update prev's next pointer */
				cur = next_node; /*and move cur to the next node after deletion */
			}
		}
		else
		{
			/* continue searching */
			prev = cur;
			cur = cur->next;
		}
	}
}
