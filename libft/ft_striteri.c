/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:47:07 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/07/21 17:18:51 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	modify_character(unsigned int index, char *c)
{
	*c = 'A' + index;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	if (s == NULL || f == NULL)
		return ;
	index = 0;
	while (s[index] != '\0')
	{
		f (index, s + index);
		index++;
	}
}

/*int	main()
{
	char str[] = "Hello world!";
	printf("Original String: %s\n", str);

	ft_striteri(str, modify_character);
	printf("Modified String: %s\n", str);
	return (0);
}*/
