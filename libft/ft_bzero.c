/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:59:48 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/07/17 14:02:32 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n && str[i] != '\0')
	{
		str[i] = 48;
		i++;
	}
}

/*int main()
{
  char str[] = "Hello";
  size_t n = sizeof(str);

  ft_bzero(str, n);
  printf("result: %s\n", str);

  return (0);
}*/
