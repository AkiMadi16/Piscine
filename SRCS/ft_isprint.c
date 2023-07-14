#include  "libft.h"

int ft_isprint(int c)
{
  if (c >= 32 && c <= 126)
      return (1);
  return (0);
}

/*int main(int argc, char **argv)
{
  (void)argc;
  
  char c = argv[1][0];

  int result = ft_isprint(c);
  printf("result: %d\n", result);

  return (0);
}*/