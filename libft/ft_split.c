/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:39:41 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/07/21 16:57:52 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != '\0' && str[i] != c)
			{
				i++;
			}
			if (str[i] == '\0')
				return (count);
		}
		i++;
	}
	return (count);
}

static char	**free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static int	ft_word_end(char *s, char c, int i)
{
	int	end;

	end = 0;
	while (s && s[i] && end != 1)
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			end = 1;
		}
		if (end != 1)
			i++;
	}
	return (i);
}

static char	*ft_word_allocate(char *s, char c, int i, int j)
{
	char	*word;
	int		end;

	end = 0;
	while (s && *s && end != 1)
	{
		if (*s != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			end = 1;
		}
		if (end != 1)
			s++;
	}
	word = (char *)malloc(i + 1);
	if (!word)
		return (NULL);
	while (s && *s && *s != c)
	{
		word[j] = *s++;
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	j;
	size_t	i;
	size_t	pos;

	j = ft_count_words(s, c);
	i = 0;
	pos = 0;
	split = malloc(sizeof(char *) * (j + 1));
	if (!split)
		return (NULL);
	split[j] = NULL;
	while (i < j)
	{
		split[i] = ft_word_allocate((char *)(s + pos), c, 0, 0);
		if (!split[i])
		{
			free_split(split);
			return (NULL);
		}
		pos = ft_word_end((char *)s, c, pos);
		i++;
	}
	return (split);
}

/*int	main()
{
	char *s = "Hello,world,this,is,a,test,split";
	char c = ',';

	char **split = ft_split(s, c);

	printf("Split words: %s\n", *split);
	free_split(split);

	return (0);
}*/
