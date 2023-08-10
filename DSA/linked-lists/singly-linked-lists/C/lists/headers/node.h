#ifndef __NODE_H__
#define __NODE_H__

/**
 * struct Node - node structure for linked list
 *
 * @data: integer data
 * @next: next pointer
*/
typedef struct Node
{
	int data;
	struct Node *next;
} Node;
#endif
