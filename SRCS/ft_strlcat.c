#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t c;
	size_t d;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < size)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}

// gcc -Wall -Wextra -Werror -o libft.a ft_strlcat.c ft_strlen.c
/*int main()
{
  char dst[20] = "Hello";
  const char *src = "World!";
  size_t result;

  printf("Before strcat: %s\n", dst);

  result = ft_strlcat(dst, src, sizeof(dst));

  printf("After strlcat: %s\n", dst);
  printf("Result: %zu\n", result);

  return (0);
}*/