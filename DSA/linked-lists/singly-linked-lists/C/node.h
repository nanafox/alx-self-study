#ifndef __NODE_H__
#define __NODE_H__

/**
 * struct Node - node struct
 *
 * @data: data portion
 * @next: next pointer
 */
typedef struct Node
{
	int data;
	struct Node *next;
} Node;

#endif
