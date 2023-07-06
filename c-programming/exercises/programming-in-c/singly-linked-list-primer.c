#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
};

int main(void)
{
	struct entry n1, n2, n3;
	n1.value = 10;
	n2.value = 20;
	n3.value = 30;

	printf("Value1: %d\n", n1.value);

	n1.next = &n2; /*get next*/
	n2.next = &n3;

	printf("Value2: %d\n", n1.next->value);
	printf("Value3: %d\n", n2.next->value);
}
