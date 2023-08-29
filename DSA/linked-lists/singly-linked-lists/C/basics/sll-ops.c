#include "../node.h"
#include "extras.c"
#include <stdlib.h>

/**
 * prepend - insert node at the beginning
 *
 * @head: head
 * @data: data to insert
 *
 * Return: head
 */
Node *prepend(Node *head, int data)
{
	Node *node = malloc(sizeof(Node));

	if (err_chk(node, MEM_ERR))
	{
		err_msg(MEM_ERR);
		exit(MEM_ERR);
	}
	node->data = data;
	node->next = head;
	head = node;

	return (head);
}

/**
 * append - insert node at the end
 *
 * @head: head
 * @data: data to insert
 *
 * Return: head
 */
Node *append(Node *head, int data)
{
	Node *node = malloc(sizeof(Node));

	if (err_chk(node, MEM_ERR))
	{
		err_msg(MEM_ERR);
		exit(MEM_ERR);
	}
	node->data = data;
	Node *tail = head;

	node->next = NULL;
	if (head == NULL)
		return (prepend(head, data));

	while (tail->next != NULL)
		tail = tail->next;
	tail->next = node;
	return (head);
}

/**
 * insert - insert node at a given index/position
 *
 * @head: head
 * @index: position to insert. (0-indexed)
 * @data: data to insert
 *
 * Return: head
 */
Node *insert(Node *head, int index, int data)
{
	Node *node = malloc(sizeof(Node));

	if (err_chk(node, MEM_ERR))
	{
		err_msg(MEM_ERR);
		exit(MEM_ERR);
	}
	if (index == 0)
		return (prepend(head, data));
	int i = 0;
	Node *prev, *cur;

	node->data = data;
	cur = head;

	while ((cur != NULL) && (i < index))
	{
		prev = cur;
		cur = cur->next;
		i++;
	}
	prev->next = node;
	node->next = cur;

	return (head);
}

/**
 * del_head - delete first node at head
 *
 * @head: head
 *
 * Return: head
 */
Node *del_head(Node *head)
{
	if (err_chk(head, EMPT_LIST))
		err_msg(EMPT_LIST);
	else
	{
		Node *cur = head; /* temporary */

		head = head->next; /* move head */
		free(cur); /* free memory */
		cur = NULL;
	}
	return (head);
}

/**
 * del_tail - delete last node
 *
 * @head: head
 *
 * Return: head
 */
Node *del_tail(Node *head)
{
	if (err_chk(head, EMPT_LIST))
		err_msg(EMPT_LIST);
	else
	{
		Node *prev, *tail;

		tail = head;
		while (tail->next != NULL) /* are we at the tail? */
		{
			prev = tail;
			tail = tail->next;
		}
		prev->next = NULL;
		free(tail);
		tail = NULL;
	}
	return (head);
}

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
		 * move previous node's next pointer to point to the next pointer of the node
		 * to be deleted and release memory
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
	while(cur != NULL)
	{
		temp = cur->next;
		free(cur);
		cur = temp;
	}
	head = NULL;
	return (head);
}

/*
 * most of the operations could have been written in a single function
 * but I preferred breaking it into multiple functions for the sake of
 * learning and ease of function calls.
 *
 * I believe when the function of a funtion is clearly named, it makes
 * using it easier. Also, it enhances the ability to  easily remember
 * which one to use based on your needs.
 */
