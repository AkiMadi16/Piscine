/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:59:05 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/07/21 17:37:16 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	i;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		len = 0;
	if (len > slen)
		len = slen;
	if (len > (slen -1) - start + 1)
		len = slen - start;
	new = (char *)malloc (sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = s[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return (new);
}

/*int	main()
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
}*/
