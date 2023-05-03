#include <stdio.h>

int main()
{
    /*
    //reference - https://www.tutorialspoint.com/cprogramming/c_operators.htm

    //so far we've worked with some basic operators
    /////////////   Plus and Minus   ///////////// (unary)
        +
        -

    /////////////   Arithmetic   ///////////// (binary)
        +
        -
        /
        *
        %

    /////////////   Increment Decrement Operators   ///////////// (unary)
        ++
        --

    /////////////   Assignment Operators   ///////////// (binary)
        =
        +=
        -=
        /=
        *=
        %=

    /////////////   Comparison Operators   ///////////// (binary)
        ==
        !=
        <
        >
        <=
        >=

    /////////////   Logical operators   ///////////// (binary)
        &&
        ||
        !

    /////////////   Conditional operator   ///////////// (ternary)
        ? :

    /////////////   Precdence and Associativity  /////////////

    Reference - https://en.cppreference.com/w/c/language/operator_precedence
    */

    printf("\nforce precedence with ()\n");
    int x = 2 * (3 + 3);
    int y = (2 * 3) + 3;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    printf("Modulus operator: \n");
    int c = 10 % 3; 
    printf("10 %% 3 = %d\n", c);

    printf("Unary minus:\n");
    int a = 5;

    int b = -a;
    printf("b = %d\n", b);
    printf("a = %d\n", a); // A doesn't change

    printf("post increment:\n");
    a = 5;
    b = 5;
    b = a++; 
    printf("b = %d\n", b); //b gets assigned to first
    printf("a = %d\n", a); //Then A is incremented

    b = 5;
    a = 5; //start fresh
    b = ++a;

    printf("Pre increment:\n");
    printf("b = %d\n", b); //B gets assigned to second
    printf("a = %d\n", a); //A is incremented first

    printf("Assignmnet operators:\n");
    a = 5;
    b = 5;
    b += a;
    printf("b += a = %d\n", b); //5 + 5;
    a *= 30;
    printf("a *= 30 = %d\n", a); //5 * 30
    a %= 140;
    printf("a %%= 140 = %d\n", a); //150 % 140
}