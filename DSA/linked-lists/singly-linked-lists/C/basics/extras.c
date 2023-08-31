#include "../node.h"
#include "sll-ops.h"
#include <stdio.h>

/**
 * err_chk - check for errors
 *
 * @node: node structure
 * @e: error code
 *
 * Return: error code
 */
int err_chk(Node *node, int e)
{
	if (node == NULL)
		return (e);
	return (0);
}

/**
 * err_msg - print an error message depending on the error code
 *
 * @e: error code
 */
void err_msg(int e)
{
	switch (e)
	{
	case MEM_ERR:
		fprintf(stderr, "Memory allocation failed!\n");
		break;
	case EMPT_LIST:
		fprintf(stderr, "List is empty!\n");
		break;
	case NOT_FOUND:
		fprintf(stderr, "Not such element or index\n");
		break;
	default:
		fprintf(stderr, "Unkown error\n");
		break;
	}
}

/**
 * print - prints the list
 *
 * @head: head node
 */
void print(Node *head)
{
	if (err_chk(head, EMPT_LIST))
	{
		err_msg(EMPT_LIST);
		return;
	}
	Node *cur = head;

	while (cur != NULL)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
