# Dynamic Memory Allocation

## The `malloc` function

Prototype: `void *malloc(size_t size);`

- Allocates a block of memory the heap.
- Accepts one argument (`size`), which is the number of bytes to allocate
- Returns `NULL` if memory allocation fail
- After memory is allocated, the first byte's address is returned
- Using unallocated or deallocated memory will cause issues.
- Use the `sizeof()` function when specifying the number of bytes `malloc` needs to allocate
	- This is for compatibility and portability sake
