#include "libft.h"

int ft_tolower(int c)
{
  if (c >= 65 && c <= 90)
      c += 32;
      return (c);
}

/*int main()
{
  int c = 'H';
  int result;

  result = ft_tolower(c);

  printf("Original character: %c\n", c);
  printf("Lowercase character: %c\n", result);

  return (0);
}*/
