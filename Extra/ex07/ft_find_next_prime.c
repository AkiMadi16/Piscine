/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:39:07 by npaturzo          #+#    #+#             */
/*   Updated: 2023/06/06 17:47:28 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (ft_is_prime(i) == 0)
	{
		i++;
	}
	return (i);
}

#include <stdio.h>
int	main(void)
{
	int i = 5;

	while(i < 100)
	{	int result = ft_find_next_prime(i);
		printf("i = %i, next = %d\n", i, result);
		i++;
	}

}
