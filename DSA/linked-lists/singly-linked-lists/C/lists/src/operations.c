#include "../headers/operations.h"
#include "others.c"
#include <malloc.h>

/**
 * prepend - insert element at the beginning of list
 *
 * Time complexity: O(1)
 * @head: pointer to head
 * @data: value to insert
 */
void prepend(Node **head, int data)
{
	Node *item = malloc(sizeof(Node));

	if (item == NULL)
		error(1);
	item->data = data;
	item->next = *head;
	*head = item;
}

/**
 * append - insert to the end of the list
 *
 * @head: pointer to pointer of head node
 * @data: data to insert
 */
void append(Node **head, int data)
{
	Node *item = malloc(sizeof(Node));
	Node *tail = *head;

	if (item == NULL)
		error(1);
	item->data = data;
	item->next = NULL;

	if (*head == NULL)
	{
		*head = item;
		return;
	}
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = item;
}

/**
 * find - checks if an element is in the list
 *
 * @head: pointer head node
 * @data: value to search
 *
 * Return: 1 if found, 0 otherwise
 */
int find(Node *head, int data)
{
	while (head != NULL)
	{
		if (head->data == data)
			return (1);
		head = head->next;
	}
	return (0);
}

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
