/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:14:20 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/07/17 15:20:34 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int main(int argc, char **argv)
{
  (void)argc;
  
  int c = atoi(argv[1]);

  int result = ft_isascii(c);
  printf("result: %d\n", result);

  return (0);
}*/
