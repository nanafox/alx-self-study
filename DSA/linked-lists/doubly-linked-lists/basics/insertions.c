#include "dll.h"

/**
 * init initializes a doubly linked list
 * @cleanup: a cleanup function
 *
 * Return: the initialized list on success, else NULL on failure
 */
dll_t *init(void (*cleanup)(void **))
{
	dll_t *new_list = malloc(sizeof(dll_t));

	if (new_list == NULL)
	{
		fprintf(stderr, "Memory allocation for list failed!\n");
		return (NULL);
	}

	new_list->head = NULL;
	new_list->tail = NULL;
	new_list->size = 0;
	new_list->cleanup = cleanup;

	return (new_list);
}

/**
 * append - appends an element to the end of a list
 * @list: the doubly linked list to append to
 * @data: the data to append
 *
 * Return: 0 if operation was successful, non-zero otherwise
 */
int append(dll_t *list, const int data)
{
	node *element;

	if (list == NULL)
	{
		fprintf(stderr, "The list is not initialized!\n");
		return (-1);
	}

	element = malloc(sizeof(node));
	if (element == NULL)
	{
		fprintf(stderr, "Memory allocation for new node failed\n");
		return (-1);
	}

	element->data = data;
	element->next = NULL;
	element->prev = NULL;

	if (list->size == 0)
	{
		element->next = list->head;
		list->head = element;
		list->tail = element;
	}
	else
	{
		element->prev = list->tail->next;
		list->tail->next = element;
		list->tail = element;
	}
	list->size++;

	return (0);
}
