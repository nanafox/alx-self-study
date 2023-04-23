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


    return 0;
}