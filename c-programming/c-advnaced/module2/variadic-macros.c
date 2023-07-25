#include <stdio.h>

#define print(...) printf(__VA_ARGS__)
#define error(...) fprintf(stderr, #__VA_ARGS__"\n")

int main(void)
{
	print("Hello, world\n");

	error(Printing Error! to stderr);
}
