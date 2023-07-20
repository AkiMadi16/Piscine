#include "libft.h"

static	int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;
	
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if(str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s || !c || !(split = (char **)malloc((ft_count_words(s,c) +1) * sizeof((char *)))))
		return (NULL);
	start = 0;
  end = 0;
	i = 0;
	while (i < ft_count_words(s, c))
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		split[i] = ft_substr(s, start, (end - start));
		start = end;
		i++;
	}
	split[i] = NULL;
	return (split);
}

void	free_split(char **split)
{
	int i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

void	print_split(char **split)
{
	int i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
}

int	main()
{
	char *s = "Hello,world,this,is,a,test,split";
	char c = ',';

	char **split = ft_split(s, c);

	printf("Split words: %s\n", s);
	print_split(split);
	free_split(split);
	return (0);
}

