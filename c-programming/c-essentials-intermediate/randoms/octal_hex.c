// Octal and hex numbers

#include <stdio.h>


int main(void) {
    // any number that begins with a zero is an octal
    int octal_value = 0123;

    // a number written in this format is considered to be a hex
    int hex_vlaue = 0xA;

    printf("Integer value of 0123 (base 8): %d\n", octal_value);
    printf("Integer value of 0xA (Hex): %d\n", hex_vlaue);

    return 0;
}