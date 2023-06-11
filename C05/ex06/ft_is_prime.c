/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:55:22 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/06/07 16:13:43 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	factor;
	int	halfnb;

	factor = 3;
	halfnb = (nb / 2);
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (nb % factor != 0)
	{
		if (factor > halfnb)
			break ;
		factor += 2;
	}
	if (nb % factor == 0)
		return (0);
	return (1);
}

/*int	main(void)
{
	int	i = 3;

	while (i < 21)
	{
		int result = ft_is_prime(i);
		printf("number %i, returns 1 for prime number: %d\n", i , result);
		i++;;
	}
	return (0);
}*/
