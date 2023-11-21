#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct node_ - structure for each node in the list
 * @data: the data
 * @next: pointer to the next node
*/
typedef struct node_
{
	int data;
	struct node_ *next;
} node;

/**
 * struct list_ - a singly linked list struct
 * @size: stores the size of the list
 * @head: keeps the address of the head node
 * @tail: keeps the address of the tail node
 * @cleanup: a pointer to a function to free memory for the list
*/
typedef struct list_
{
	size_t size;
	node *head;
	node *tail;
	void (*cleanup)(void **);
} list;

/* public interfaces */

int pop(list *user_list);
void clear(list *user_list);
void reverse(list *user_list);
void print_list(list *user_list);
list *init(void (*cleanup)(void **));
int rm(list *user_list, const int data);
void append(list *user_list, const int data);
void insert(list *user_list, ssize_t index, const int data);

/* macros */

#define len(list) ((list)->size)
#define last(list) ((list)->tail->data)
#define first(list) ((list)->head->data)

#endif /* LIST_H */
