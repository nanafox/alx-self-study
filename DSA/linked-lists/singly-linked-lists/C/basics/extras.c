#define MEM_ERR 1
#define EMPT_LIST 2
#define NOT_FOUND 3

int err_chk(Node *node, int e)
{
	if (node == NULL)
		return (e);
	return 0;
}

void err_msg(int e)
{
	switch(e)
	{
		case MEM_ERR:
			fprintf(stderr, "Memory allocation failed!\n");
			break;
		case EMPT_LIST:
			fprintf(stderr, "List is empty!\n");
			break;
		case NOT_FOUND:
			fprintf(stderr, "Not such element or index\n");
			break;
		default:
			fprintf(stderr, "Unkown error\n");
			break;
	}
}

void print(Node *head)
{
	if (err_chk(head, EMPT_LIST))
	{
		err_msg(EMPT_LIST);
		return;
	}
	Node *cur = head;
	while (cur != NULL)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
