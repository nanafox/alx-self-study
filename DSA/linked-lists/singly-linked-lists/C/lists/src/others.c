#include "../headers/operations.h"
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * error - handles error code and messages
 *
 * @code: error code
 *
 * Return: error code
 */
int error(int code)
{
	switch (code)
	{
	case 1:
		fprintf(stderr, "Error: %s\n", strerror(errno));
		exit(code);
	case 2:
		fprintf(stderr, "Error: Invalid index position\n");
		exit(code);
	default:
		fprintf(stderr, "An error occurred and I don't know why!\n");
		break;
	}
}

/**
 * print_list - print contents in a list
 *
 * @list: list to print
 */
void print_list(Node *list)
{
	putchar('[');
	while (list != NULL)
	{
		printf(" %d, ", list->data);
		list = list->next;
	}
	printf("]\n");
}

/**
 * print_reverse - prints list in reverse order. list is unchanged
 *
 * Time Complexity: O(n)
 * Space complexity: O(n)
 *
 * Note: This is just for testing and learning purposes, this is
 * not very efficient.
 *
 * @head: head node
 */
void print_reverse(Node *head)
{
	if (head == NULL)
		return;
	print_reverse(head->next);
	printf("%d ", head->data);
}

/**
 * len - get size of list
 *
 * Time Complexity: O(n). There is a better option, but using this for now
 *
 * @head: pointer to head node
 *
 * Return: size of linked list
 */
unsigned int len(Node *head)
{
	unsigned int len = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		head = head->next;
		len++;
	}

	return (len);
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
