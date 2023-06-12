/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:04:09 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/06/11 14:04:11 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int size)
{
	char	i;

	if (size == 0)
		return ;
	if (size > 9)
		ft_putnbr(size / 10);
	i = '0' + size % 10;
	write(1, &i, 1);
}

void	ft_show_tab(struct s_stock_str *ptr)
{
	int	i;

	i = 0;
	while (ptr[i].str != '\0')
	{
		write(1, ptr[i].str, ptr[i].size);
		write(1, "\n", 1);
		if (ptr[i].size != 0)
			ft_putnbr(ptr[i].size);
		else
			write(1, "0", 1);
		write(1, ptr[i].copy, ptr[i].size);
		write(1, "\n", 1);
		i++;
	}
}
