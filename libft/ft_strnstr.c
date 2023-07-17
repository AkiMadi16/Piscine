/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:10:34 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/07/17 16:35:56 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!str && !len)
		return (0);
	if (to_find[0] == '\0' || to_find == str)
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < len)
		{
			if (str[i + j] == '\0' && to_find[j] == '\0')
				return ((char *)&str[i]);
				j++;
		}
		if (to_find[j] == '\0')
			return ((char *)(str + i));
			i++;
	}
	return (0);
}

/*int main()
{
  const char str[] = "Hello, World!";
  const char to_find[] = "World";
  size_t len = 13;
  char *result;

  result = ft_strnstr(str, to_find, len);

  if (result != NULL)
  {
    printf("Substring found: %s\n", result);
  } 
  else
  {
    printf("Substring not found.\n");
  }
  return (0);
}*/
