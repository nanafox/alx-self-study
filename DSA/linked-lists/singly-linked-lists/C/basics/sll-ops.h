#ifndef __SLL_OPS_H__
#define __SLL_OPS_H__

#define MEM_ERR 1
#define EMPT_LIST 2
#define NOT_FOUND 3

#include "../node.h"

Node *del_list(Node *head);
Node *del_tail(Node *head);
Node *del_head(Node *head);
Node *del_index(Node *head, int index);
Node *prepend(Node *head, int data);
Node *append(Node *head, int data);
Node *insert(Node *head, int index, int data);
void err_msg(int e);
int err_chk(Node *node, int e);
void print(Node *head);

#endif
