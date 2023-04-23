// a simple task to test ability to locate errors and fix them


// base code
/*
    #include <stdio.h>

    int main() {
        printf("The value of five is: %d \n", 5int);
        return 0;
    }
*/

// here's my fix

#include <stdio.h>

int main() {
	printf("The value of five is: %d \n", 5);  // the fix was to remove "int"
	return 0;
}