# Introdunction to Pointers

> A pointer is a variable that stores the address of a memory location.

## Quick Notes on Pointers

- contains the memory address of another variable, object, or function.
- declared to be of a **specific type** *depending* on what it's *pointing* to.
  - E.g. To point to the memory address of an `int` data type, 
	  the pointer <strong><u>must</u></strong> be an `int` too.
  - This helps during pointer arithmetic.
- provides support for dynamic memory allocation.
- closely tied to array notation. e.g. `*(a + 1) == a[1]`
- used to manipulate data in memory.
- provides the ability to pass arguments or data structures as references without
	incurring the large overhead of creating copies of them.
  - This overhead is true when an argument is *passed by value.*
- uninitialized pointers will contain garbage value when dereferenced
  - This is also true when the pointer is set to `NULL` or the memory location it was pointing to is freed.
- It is easier when pointer declarations are read backward.
- A `NULL` pointer does not point to any valid memory location
  - `NULL` is usually define as a macro... `#define ((void *) 0)`
- A `NULL` pointer and an **uninitialized** pointer are different
  - An **uninitialized pointer** points to a valid memory location, and has some garbage value
	- Dereferencing it will output an some unexpected value.
  - A `NULL` pointer does not reference any location in memory.
	- Deferencing it will cause a **segmentation fault**


# Code snippets

1. [Declaring Pointer Variables](0x00-declaring_pointers.c)
2. [Initializing Pointer Variables](0x01-initializing_pointers.c)
3. [Displaying Pointer Values](0x02-displaying_pointer_values.c)
4. [Dereferencing Pointer Variables](0x03-dereferencing_pointers.c)
5. [Null Pointers vs Uninitialized Pointers](0x04-null_pointers.c)
