/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:23:06 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/06/06 12:08:47 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}	
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

/*int	main(void)
{
	int	nb = 42;
	int nb1 = -2147483648;
	int nb2 = 1;
	int nb3 = -2147483647;

	ft_putnbr(nb);
	write(1, "\n", 1);
	ft_putnbr(nb1);
	write(1, "\n", 1);
	ft_putnbr(nb2);
	write(1, "\n", 1);
	ft_putnbr(nb3);
	write(1, "\n", 1);
	return (0);
}*/
