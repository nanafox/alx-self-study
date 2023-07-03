# Advanced operations on arrays and pointers, memory management, and the basics of functions

- The **[ ]** operator is commutative

  ```c
  char words[] = "Hello";

  puts(words); /*prints Hello*/

  1[words] = 'a'; /*modify 2nd element*/
  puts(words); /*prints Hallo*/

  words[1] = 'e'; /*change back to 'e'*/
  puts(words) /*prints Hello*/
  ```

## The void Pointer

- the void pointer `void *ptr` is known as amorphous pointer.
- it can point to any value of any type
- it cannot be subjected to the **dereference** operator
- it can't be dereferenced like a **typed pointer**
- when needed, it can be *type-casted* to the preferred data type

## Allocating memory for 2D array - multidimensional array

### Option 1

1. create a pointer to pointer variable. `**ptr`
2. allocate space for rows in the array. `malloc(sizeof(int *))`
   1. this is a pointer to int. `int *`
3. allocate space for individual elements in each row of the array
   1. done through a for loop

```c
int row = 2; /*rows for 2D array*/
int col = 3; /*columns in 1D arrays*/
int **ptr = malloc(sizeof(int *) * row); /*size of pointer to int*/

for (int i = 0; i < row; i++)
   /*allocate space for individual integer values in 1D array*/
   ptr[i] = malloc(sizeof(int) * col);

/*adding items*/
for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++)
        ptr[i][j] = i + 1;
```

### Option 2

- Similar to option, but just shorter and slightly different

```c
int row = 2;
int col = 3;
int (*ptr)[row][col] = malloc(sizeof *ptr);

/*adding items*/
for (int i = 0; i < row; i++)
    for (int j = 0; i< col; j++)
        (*ptr)[i][j] = i + 1;

/*accessing elements*/
printf("%d", (*ptr[0][1]));
```

## Freeing memory space from 2D arrays

### If Option 1 was used

1. De-allocate memory space for all 1D arrays.
   1. each pointer to int array / row. `int *`
2. De-allocate memory space for array.
   1. this is the pointer to pointe variable. `**ptr`

```c
/*using the code from memory allocation side*/
for (int i = 0; i < row; i++)
    free(ptr[i]); /*de-allocating each 1D array*/
free(ptr); /*de-allocating 2D array space*/
```

## For option 2

This is actually straightforward, use `free(ptr);`
