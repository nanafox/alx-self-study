#ifndef FREE_H
#define FREE_H

#include <stdlib.h>

void _free(void **ptr);
#define safe_free(p) _free((void **) &(p))

#endif
