#include "dll.h"

/**
 * init - initializes a doubly linked list
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

	if (check_err(list, 'l') == -1)
		return (-1); /* the list is not initialized */

	element = malloc(sizeof(node));
	if (check_err(element, 'm') == -1)
		return (-1); /* memory allocation failed */

	element->data = data;

	if (list->size == 0)
	{
		element->prev = NULL;
		element->next = list->head;
		list->head = element;
		list->tail = element;
	}
	else
	{
		element->next = NULL;
		element->prev = list->tail;
		list->tail->next = element;
		list->tail = element;
	}
	list->size++;

	return (0);
}

/**
 * insert - inserts a node at a specified index
 * @list: the list to insert into
 * @index: the index to insert at
 * @data: the data to insert
 *
 * Description: The insert() function inserts a element at the specified index.
 * It also accepts negative indexes, in which case it would start inserting
 * from behind as opposed to the general forward movement. To make things
 * easier for the user, indexes greater than or equal to the size of the list
 * will be inserted at the end. The negative indexing starts from -1.
 *
 * Return: 0 on success, else -1 on failure
 */
int insert(dll_t *list, ssize_t index, const int data)
{
	size_t pos, c_pos;
	node *element, *current;

	if (check_err(list, 'l') == -1)
		return (-1); /* the list is not initialized */

	if (index == -1 || list->size == 0 || index >= (ssize_t)list->size)
		return (append(list, data));

	element = malloc(sizeof(node));
	if (check_err(element, 'm') == -1)
		return (-1); /* memory allocation failed */

	element->data = data;
	pos = (index < 0) ? index - list->size : (size_t)index;
	if (pos == 0)
	{
		element->next = list->head;
		list->head->prev = element;
		list->head = element;
	}
	else
	{
		c_pos = 0;
		current = list->head;
		while (current->next != NULL && c_pos < pos)
		{
			current = current->next;
			c_pos++;
		}
		element->next = current;
		element->prev = current->prev;
		current->prev->next = element;
		current->prev = element;

		if (element->next != NULL)
			element->next->prev = element;
	}
	list->size++;
	return (0);
}
