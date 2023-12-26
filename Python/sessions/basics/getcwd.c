#include <stdio.h>
#include <unistd.h>
#define SIZE 1024

int main(void)
{
	char dir_name[SIZE];
	
	getcwd(dir_name, SIZE);
	printf("%s\n", dir_name);
	
	return (0);
}
