#include "libft.h"

int ft_isdigit(int c)
{
  if (c >= 48 && c <= 57)
      return (1);
    return (0);
}

/*int main(int argc, char **argv)
{
  (void)argc;
  
  char c = argv[1][0];

  int result = ft_isdigit(c);
  printf("result: %d\n", result);

  return (0);
}*/