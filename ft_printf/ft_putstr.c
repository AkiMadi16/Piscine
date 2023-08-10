#include "libftprintf.h"

int ft_putstr(const char *s)
{
  int i;

  i = 0;
  while (s[i] != '0')
  {
    i += ft_putchr(s[i]);
    return (i);
  }
}