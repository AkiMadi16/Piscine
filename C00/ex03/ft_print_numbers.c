/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:28:56 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/05/22 12:29:33 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	number;

	number = '0';
	while (number <= '9')
	{
		ft_putchar(number);
		number++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
