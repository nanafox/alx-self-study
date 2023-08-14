#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int asprintf(char **buf, char *format, ...)
{
  va_list var;
  va_start (var, format);
  int size = vsnprintf (NULL, 0, format, var);
  *buf = calloc (size + 1, 1);
  va_end(var);

  va_start(var, format);
  vsprintf(*buf, format, var);
  va_end (var);

  return (size);
}

int main(void)
{
  char *msg;
  asprintf(&msg, "Mary %s %c littl%x lamb.", "had", 'a', 14);
  printf("%s\n", msg);
  free (msg);

  return (0);
}
