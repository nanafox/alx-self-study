#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define BUFF_SIZE 1024
#define RUNNING 1
#define STOPPED 0

void *_memcpy(void *dest, const void *src, size_t n);
void *_realloc(void *old_mem_blk, size_t old_size, size_t new_size);
ssize_t _getline(char **lineptr, size_t *n, int fd);

/* a safer way to deallocate dynamic memory */
void _free(void **ptr);
#define safe_free(p) _free((void **) &(p))

#endif /* MAIN_H */
