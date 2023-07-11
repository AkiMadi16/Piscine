#include "libft.h"

char  *ft_strchr(const char *s, int c)
{
  while ((char)c != *s)
  {
    if (!*s)
      return (0);
      s++;
  }
  return ((char *)s);
}

/*int main()
{
  char str[] = "Hello, World!";
  char  *result;

  result = ft_strchr(str, 'o');

  if (result != NULL)
  {
    printf("Character found at position: %ld\n", result - str);
    printf("Remaining string: %s\n", result);
  } else {
    printf("Character not found. \n");
  }
  return (0);
}*/