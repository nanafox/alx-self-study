#ifndef __STRING_IO_H__
#define __STRING_IO_H__

#include <string.h>
#include <stdio.h>

extern void _fgets(char *str, int len);
extern int _getline(char *line, int len);
extern void _reverse(char *s, int len);

#endif
