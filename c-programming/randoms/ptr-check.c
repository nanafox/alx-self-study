#include <stdio.h>

int main(void)
{
	char str[] = "ABC";
	char c;
	char *p;
	
	p = str + 1;
	
	printf("\nString Value: %s\n", str);
	printf("Address of str[1]: %p, Value of str[1]: %c\n", &str[1],str[1]);
	printf("Address of p: %p, Value at *p: %c\n", p, *p);

	c = *p++; /*stores the value at *p, then increments the index of p by 1*/
	/*
	 * similar to 
	 * c = *p;
	 * p++;
	 */

	puts("\nAfter c = *p++");	
	printf("String Value: %s\n", str);
	printf("Address of c: %p, Value of c: %c\n", &c, c);
	printf("Address of p: %p, Value of *p: %c\n", p, *p);
	
	c = (*p)++; /*dereferences value, then increments value == str[1]++*/
	puts("\nAfter c = (*p)++");
	printf("String Value: %s\n", str);
	printf("Address of c: %p, Value of c: %c\n", &c, c);
	printf("Address of p: %p, Value at *p: %c\n", p, *p);

	return (0);
}
