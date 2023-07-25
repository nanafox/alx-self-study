// variables

#include <stdio.h>

int main(void) {

    // if the characters are more than what it is specified, an error occurs
    char name_of_person[20] = "theLazyProgrammer";

    printf("Hello %s!\n", name_of_person);

    // declare the variable
    int age;

    printf("INFO: Some lines before variable assignment\n");

    // variable assignment or initialization
    age = 75;

    // print variable
    printf("Age: %d\n", age);

    // assign value at declaration
    printf("INFO: Assignment at variable declaration\n");
    int age_again = 75;
    printf("Age: %d\n", age_again);

    // can be chained at declaration
    int x, y, z;

    // check equality between int and float numbers
    int i = 45;
    float f = 45.0;

    printf("\n");
    (i == f) ? printf("Yes, %i == %f\n", i, f) : printf("No, %i != %f\n", i, f);

    return 0;
}