#include "libft.h"

int ft_toupper(int c)
{
  if (c >= 97 && c <= 122)
      c -= 32;
      return (c);
}

/*int main()
{
  int c = 'd';
  int result;

  result = ft_toupper(c);

  printf("Original character: %c\n", c);
  printf("Uppercase character: %c\n", result);

  return (0);
}*/
