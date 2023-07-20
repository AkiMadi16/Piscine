/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:54:25 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/07/17 16:32:32 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}

/*int main()
{
  char str[] = "Hello, World!";
  char  *result;

  result = ft_strchr(str, 'o');

  if (result != NULL)
  {
    printf("Character found at position: %ld\n", result - str);
    printf("Remaining string: %s\n", result);
  } else {
    printf("Character not found. \n");
  }
  return (0);
}*/
