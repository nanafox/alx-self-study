#ifndef __STRING_IO_H__
#define __STRING_IO_H__

#include <string.h>
#include <stdio.h>

void _fgets(char *str, int len);
int _getline(char *line, int len);
void _reverse(char *s);
void _itoa(int n, char *s);

#endif
