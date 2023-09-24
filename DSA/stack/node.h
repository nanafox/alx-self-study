#ifndef __NODE_H__
#define __NODE_H__

/**
 * struct Node - node structure for stack implementations
 * @data: data portion
 * @next: pointer to next node
 */
typedef struct Node
{
	int data;
	struct Node *next;
} Node;

#endif
