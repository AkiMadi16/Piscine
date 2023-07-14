#include "libft.h"

int ft_atoi(const char *str)
{
  int i;
  int sign;
  unsigned long int result;

  i = 0;
  sign = 1;
  result = 0;
  while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    i++;
    if (str[i] == 45)
    {
      sign = -1;
      i++;
    } 
    else if (str[i] == 43)
        i++;
    while (ft_isdigit(str[i]))    
    {
      result = result * 10 + (str[i] - 48);
      i++;
    }
    return (int)(result * sign);
}

int main()
{
  const char str[] = "-12345&$@";
  int result = ft_atoi(str);

  printf("Result: %d\n", result);

  return (0);
}