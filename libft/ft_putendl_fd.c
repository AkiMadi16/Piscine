/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:24:52 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/07/21 11:36:56 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	newline;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	newline = '\n';
	write(fd, &newline, 1);
}

/*int	main()
{
	char *message = "Hello World ";

	ft_putendl_fd(message, 1);
	ft_putendl_fd("This is a test!", 1);
	return (0);
}*/
