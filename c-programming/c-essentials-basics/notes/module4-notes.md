# Module 4 - Switch, Aggregating Data into Arrays, Pointers, and the basics of Strings

## Working with Arrays

- Each element or member of the array can be referenced using an *index* or *subscript*
  - e.g. `x[2];`
  - here's a short program to drive the point home

 ```c
 int odd_numbers[] = {1, 3, 5, 7, 9, 11, 15} /*each item is indexed, starting from 0*/

 /*accessing members of the array*/
 odd_numbers[0]; /*this will return 1, since it's in the first position*/
 odd_numbers[3]; /*Expect 7, remember the index is zero based.*/
 /*Avoid this next code as much as possible, don't access indexes that don't exist*/
 odd_numbers[7]; /*the behavior of this code is undefined as the index is greater than the total number of elements in the array*/
 ```

- All elements in an array **must** be of the same data type

### Initializing arrays

- The general syntax is `data_type array_name[size] = {elements,...}`;
- The size of the array must be at compile time
  - for this reason, a code like this will cause a compile time error

     ```c
     int size = 4;
     int ages[size] = {34, 32, 12, 9};
     ```

  - instead use this

     ```c
     /*option 1 - fixed array size*/
     #define SIZE 4 /*modified line*/
     int ages[SIZE] = {34, 32, 12, 9};

     /*option 2 - dynamic emory allocation*/
     ```

- The above code works because it complies with the **static array initialization rule**
- The `SIZE` is known at compile time and it doesn't change later in the code. It is a **constant**

### Code snippets on Arrays

- [A rate counter](../../mini-codes/ratings-counter.c)
- [Using for loop to store and print numbers](../randoms/array-for.c)
- There's more scattered across the folders in this repo

## Working with Pointers

> ...pointers are like signposts. They don’t say anything about the place itself, but they show clearly how to reach it.

- a variable that contains the memory address of another variable.
- The **address (left value)** of a pointer is used to refer to itself.
  - accessed with *address-of* operator. `&ptr_num`
- The **content (right value)** is the *address* of another variable
  - accessed with the variable name **only**. `ptr_num`
- both left and right values are addresses
- to get the value pointer *points* to, use the *indirection* or *dereference* operator
  - e.g. `*ptr_num` would return the value of the variable pointed to.
- check [this file](../../exercises/sams-24-hours-of-c/pointers.c) to get an idea.
- ***null pointers*** are pointers with their right value (content) set to 0
  - they can **never** point to valid data
  - the recommended way is to use the `NULL` which is actually 0 but can't be modified
    - it is a macro
    - requires the `stdio.h` or `stddef.h` headers
    - e.g. `int *p = NULL;`
    - dereferencing NULL pointers is forbidden and causes runtime errors and stops the flow of the program
- the **value** of the variable is what the variable stores;
- the **address** of the variable is information about where this variable is placed (where it *lives*).
- an array name that is not followed by a subscript is interpreted as a pointer to
the first element of the array
- the compiler determines the scalar size of a pointer using this formula
  - `ptr + (n * sizeof(data-type))` or `ptr - (n * sizeof(data-type))` where
    - *ptr* is the pointer,
    - *n* is the constant to add or subtract
    - *sizeof(data-type)* is the size in bytes of the pointer type

  ```c
  char *str = "This is a string";
  char *ptr_str; /*a character array pointer*/

  ptr_str = str; /*assign address of string to ptr_str*/

  *(ptr_str + 4) == str[5]; /*points to 4th index - testing for equality*/

  /*print the same element from character array*/
  puts("Before");
  printf("Value of str[5]: %c\n", str[5]);
  printf("Value of *(ptr_str + 5): %c\n", *(ptr_str + 5));

  /*modifying list through pointer*/
  *(ptr_str + 5) = 'I'; /*same as `str[5] = 'I'`*/

  /*print the changed value*/
  puts("After");
  printf("Value of str[5]: %c\n", str[5]);
  printf("Value of *(ptr_str + 5): %c\n", *(ptr_str + 5));
  ```
