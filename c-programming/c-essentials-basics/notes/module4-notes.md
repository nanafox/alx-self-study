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

### Code snippets on Arrays

- [A rate counter](../../mini-codes/ratings-counter.c)
- [Using for loop to store and print numbers](../randoms/array-for.c)