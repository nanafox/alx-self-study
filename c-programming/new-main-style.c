#include <stdio.h>

// ! This will fail at this point, therefore it's commented out
//// int main(int argc, string argv[]);

int main()
{
    int c;
    // using the %n format specifier. it counts the number of character so far
    printf("hello world!%n - ", &c);
    printf("%d\n", c);

    // using the %g or %G format specifier.
    double pi = 10.5004;
    printf("%g\n", pi); // returns the shortest decimal precision

    int num1 = 1;
    int num2 = 12;
    int num3 = 123;
    int num4 = 1234;
    int num5 = 12345;

    // right justifying
    printf("Right justify\n");
    printf("%d\n", num5);
    printf("%5d\n", num1);

    // left justifying
    printf("Left justify\n");
    printf("%5d  %-5d\n", num1, num1);
    printf("%5d  %-5d\n", num2, num2);
    printf("%5d  %-5d\n", num3, num3);
    printf("%5d  %-5d\n", num4, num4);
    printf("%5d  %-5d\n", num5, num5);

    printf("\n");
    printf("%-7d\n", 123);
    printf("%-6g\n", 123.456);

    return 0;
}