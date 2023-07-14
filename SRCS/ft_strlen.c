#include "libft.h"

size_t  ft_strlen(const char *str)
{
  size_t i;

  i = 0;
  while (str[i] != '\0')
      i++;
    return (i);
}

/*int main()
{
  const char s[] = "Hello";
  
  int result = ft_strlen(s);

  printf("length of the string: %i\n", result);
  return 0;
}*/