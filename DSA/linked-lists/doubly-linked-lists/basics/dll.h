#ifndef DLL_H
#define DLL_H

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct node_ - a doubly linked node structure
 * @data: the data for each element in the list
 * @prev: a pointer to the previous node in the list
 * @next: a pointer to the next node in the list
 */
typedef struct node_
{
	int data;
	struct node_ *prev;
	struct node_ *next;
} node;

/**
 * struct dll_ - a doubly linked list structure
 * @size: size of the list
 * @head: the address of the head node
 * @tail: the address of the tail node
 * @cleanup: a cleanup function that is called for each element in the list
 * when memory needs to be deallocated
 */
typedef struct dll_
{
	size_t size;
	node *head;
	node *tail;
	void (*cleanup)(void **);
} dll_t;

dll_t *init(void (*cleanup)(void **));
int append(dll_t *list, const int data);
int insert(dll_t *list, ssize_t index, const int data);
int pop(dll_t *list);
int rm(dll_t *list, const int data);
void _free(void **);
int check_err(void *ptr, char ptr_type);
void print_list(dll_t *list);
void clear(dll_t *list);

#endif /* DLL_H */
