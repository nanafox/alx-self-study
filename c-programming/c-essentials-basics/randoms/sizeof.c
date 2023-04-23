// check the size of number data types (in bytes)

#include <stdio.h>


int main(void) {
    printf("Size of int: %lu bytes\n", sizeof(int));  // 4 bytes
    printf("Size of float: %lu bytes\n", sizeof(float)); // 4 bytes
    printf("Size of double: %ld bytes\n", sizeof(double)); // 8 bytes

    /*
        in previous codes I saw the following which were valid but causes an error here

        printf("Size of int: %d bytes\n", sizeof(int));
    */

    return 0;
}