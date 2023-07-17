/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:17:44 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/07/17 16:18:15 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*int main()
{
  int c = 'd';
  int result;

  result = ft_toupper(c);

  printf("Original character: %c\n", c);
  printf("Uppercase character: %c\n", result);

  return (0);
}*/
