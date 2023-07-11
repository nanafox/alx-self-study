#include <stdio.h>
#include <string.h>

union u_item 
{
	char name[10];
	float price;
};

struct s_item
{
	char name[10];
	float price;
};

int main(void)
{
	union u_item g1 = {.name = "rice"}; /*can't initialize more than one member*/
	struct s_item g2 = {"rice", 12.23}; /*no limit*/
	
	puts("Same declarations...");
	printf("size of union: %lu\n", sizeof(g1));
	printf("size of struct: %lu\n", sizeof(g2));
}
