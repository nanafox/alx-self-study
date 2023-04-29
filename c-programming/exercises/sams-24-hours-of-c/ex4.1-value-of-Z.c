/*Task: Write a program that prints out the numeric values of characters Z and z.*/

#include <stdio.h>

int main(void)
{
    char cap_Z = 'Z';
    char low_z = 'z';

    // print ASCII - Numeric values
    printf("ASCII value of %c: %d\n", cap_Z, cap_Z); // 90
    printf("ASCII value of %c: %d\n", low_z, low_z); // 122

    // Doing the reverse - Get the ASCII leter value from integer values
    int cap_Z_num = 90; // a char data type would've worked as well.
    int low_z_num = 122;

    // print ASCII - Letter values
    printf("\nASCII value of %d: %c\n", cap_Z_num, cap_Z_num); // Z
    printf("ASCII value of %d: %c\n", low_z_num, low_z_num); // z

    return 0;
}