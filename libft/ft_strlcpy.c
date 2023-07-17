/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:59:36 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/07/17 16:34:05 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

/*int main()
{
  char dst[20] = "Hello";
  const char src[] = "World!";
  size_t result;

  printf("Before strlcat: %s\n", dst);

  result = ft_strlcat(dst, src, sizeof(dst));

  printf("after strlcat: %s\n", dst);
  printf("Result: %ld\n", result);
  return 0;
}*/
