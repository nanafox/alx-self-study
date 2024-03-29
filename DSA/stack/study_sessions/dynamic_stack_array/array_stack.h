#ifndef DYN_ARRAY_STACK_H
#define DYN_ARRAY_STACK_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct array_stack_s - a dynamic array implementation of the stack data
 * structure
 * @top: the top of stack (handled automatically)
 * @capacity: the size of elements the stack will contain
 * @array: the array to keep track of elements of size @capacity
 */
typedef struct array_stack_s
{
	int top;
	int capacity;
	int *array;
} array_stack_t;

/* stack operations and auxiliary functions */

int pop(array_stack_t *stack);
void print_stack(array_stack_t *stack);
void print_stack(array_stack_t *stack);
void delete_stack(array_stack_t *stack);
void push(array_stack_t *stack, int data);
array_stack_t *create_stack(void);

/* macro functions */

#define is_empty(stack) ((stack)->top <= 0)
#define is_full(stack) ((stack)->top == ((stack)->capacity - 1))
#define top(stack) ((stack)->array[stack->top])

#endif
