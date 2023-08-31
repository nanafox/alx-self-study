#include "../node.h"
#include "sll-ops.h"
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

/*
 * most of the operations could have been written in a single function
 * but I preferred breaking it into multiple functions for the sake of
 * learning and ease of function calls.
 *
 * I believe when the function of a function is clearly named, it makes
 * using it easier. Also, it enhances the ability to  easily remember
 * which one to use based on your needs.
 */
