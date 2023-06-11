/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:51:53 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/06/06 18:03:35 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{	
		while (i <= power)
		{
			result *= nb;
			i++;
		}
		return (result);
	}
}

/*int	main(void)
{
	int nb = 2;
	int power = 3;

	printf("Result is 8: %d\n", ft_iterative_power(nb, power));
	printf("Result is 9: %d\n", ft_iterative_power(3, 2));
	return (0);
}*/
