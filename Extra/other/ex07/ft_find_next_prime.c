/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeatley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:27:17 by akeatley          #+#    #+#             */
/*   Updated: 2023/06/07 12:52:38 by akeatley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int nb)
{
	int long	number;

	number = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (number * number <= (long)nb)
	{
		if (nb % number == 0)
		{
			return (0);
		}
		number++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	number;

	if (nb <= 2)
	{
		number = 2;
	}
	else
	{
		number = nb;
	}
	while (ft_is_prime(number) == 0)
	{
		number++;
	}
	return (number);
}
/*
int	main(void)
{
	printf("%i,%i,%i,%i",
		ft_find_next_prime(0),
		ft_find_next_prime(16),
		ft_find_next_prime(INT_MAX),
		ft_find_next_prime(-100));
	return (1);
}
*/
