#ifndef __STACK_H__
#define __STACK_H__

#include "node.h"
#include <malloc.h>
#define empty_stack -911

Node *_stack(void);
Node *new_node(void);
int pop(Node **stack);
void push(Node **stack, int data);
void print_stack(Node *stack);

#endif
