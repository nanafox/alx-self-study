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

### Code snippets on Arrays

- [A rate counter](../../mini-codes/ratings-counter.c)
- [Using for loop to store and print numbers](../randoms/array-for.c)

## Working with Pointers

- a variable that contains the memory address of another variable.
- The **address (left value)** of a pointer is used to refer to itself.
  - accessed with *address-of* operator. `&ptr_num`
- The **content (right value)** is the *address* of another variable
  - accessed with the variable name **only**. `ptr_num`
- both left and right values are addresses
- to get the value pointer *points* to, use the *indirection* or *dereference* operator
  - e.g. `*ptr_num` would return the value of the variable pointed to.
- check [this file](../../exercises/sams-24-hours-of-c/pointers.c) to get an idea.
- ***null pointers*** are pointers with their right value set to 0
  - they can **never** point to valid data
