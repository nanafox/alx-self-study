#ifndef __POSTFIX_H__
#define __POSTFIX_H__

#include "stack.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* error signal */
#define err -9999

/* macro functions */
#define isdigit(c) (c >= '0' && c <= '9')
#define is_operator(c) (c == '+' || c == '/' || c == '*' || c == '-')

/* functions */
double postfix(char *s);
double perform_ops(double op1, double op2, char _operator);

#endif
