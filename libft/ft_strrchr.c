/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:13:38 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/07/17 16:37:34 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

/*int main()
{
  const char *s = "Hello, World!";
  int c = 'o';
  char *result;

  result = ft_strrchr(s, c);

  if (result != NULL)
  {
    printf("Character found at position: %ld\n", result - s);
  }
  else
  {
    printf("Character not found.\n");
  }
  return 0;
}*/
