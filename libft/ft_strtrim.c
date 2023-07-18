#include "libft.h"

static	int	ft_check_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
			i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	size_t	start;
	size_t	end;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	
	start = 0;
	while (s1[start] && ft_check_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_check_set(s1[end - 1], set))
		end--;
	size = end - start;
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, (s1 + start), (size + 1));
	return (new);
}

int	main()
{
	char *s1 = "  Hello World!   ";
	char *set = " ";

	char *result = ft_strtrim(s1, set);
	
	if (result)
	{
		printf("Trimmed String: %s\n", result);
		free(result);
	}
	else
	{
		printf("Failed to trim string.\n");
	}
	return (0);
}

