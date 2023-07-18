#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	finish;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	finish = 0;
	if (start < slen)
	 finish = slen - start;
	if (finish > len)
		finish = len;
	new = (char *)malloc (sizeof(char) * (finish + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, (s + start), (finish + 1));
	return (new);
}

int	main()
{
	char *str = "Hello World";
	unsigned int start = 7;
	size_t len = 5;
	char *substring;

	substring = ft_substr(str, start, len);

	if (substring == NULL)
	{
		printf("Substring allocation failed.\n");
		return (1);
	}
	printf("Original string: %s\n", str);
	printf("Substring: %s\n", substring);
	
	free(substring);
	return (0);
}
