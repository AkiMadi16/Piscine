#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(s1);
	dest = (char *)malloc(size * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	ft_memcpy(dest, s1, size);
	dest[size] = '\0';
	return (dest);
}

/*int	main()
{
	char *s1 = "Hello World!";
	
	char *dup = ft_strdup(s1);
	printf("duplicate string: %s\n", dup);
	return (0);
}*/
