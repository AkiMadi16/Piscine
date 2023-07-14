#include "libft.h"

int ft_isalpha(int c)
{
  if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
      return (1);
      return (0);
}

/*int main(int argc, char **argv)
{
  (void)argc;
  
  char c = argv[1][0];
  int result = ft_isalpha(c);
  printf("result: %d\n", result);

  return (0);
}*/