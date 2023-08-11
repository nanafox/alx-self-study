#ifndef __OPERATIONS_H__
#define __OPERATIONS_H__
#include "node.h"

void print_list(Node *list);
void del(Node **head, int data);
void del_all(Node **head, int data);
void prepend(Node **head, int data);
void append(Node **head, int data);
void insert(Node **insert, int pos, int data);
int find(Node *head, int data);
unsigned int len(Node *head);
int error(int code);

#endif
