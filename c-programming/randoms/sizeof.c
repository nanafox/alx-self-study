// check the size of number data types (in bytes)

#include <stdio.h>

int main(void)
{
    printf("Size of int: %ld bytes\n", sizeof(int));                 // 4 bytes
    printf("Size of float: %ld bytes\n", sizeof(float));             // 4 bytes
    printf("Size of double: %ld bytes\n", sizeof(double));           // 8 bytes
    printf("Size of char: %ld byte\n", sizeof(char));                // 1 byte
    printf("Size of long int: %ld bytes\n", sizeof(long int));       // 8 bytes
    printf("Size of long double: %ld bytes\n", sizeof(long double)); // 16 bytes
    printf("Size of short int: %ld bytes\n", sizeof(short int));     // 16 bytes
    printf("Size of unsigned int: %lu bytes\n", sizeof(unsigned int));     // 16 bytes

    /*
        in previous codes I saw the following which were valid but causes an error here

        printf("Size of int: %d bytes\n", sizeof(int));
    */

    return 0;
}