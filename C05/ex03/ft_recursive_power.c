/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:52:38 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/06/06 18:04:46 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}

/*int	main(void)
{
	printf("Answer is 2: %d\n", ft_recursive_power(2, 1));
	printf("Answer is 8: %d\n", ft_recursive_power(2, 3));
	printf("Answer is 9: %d\n", ft_recursive_power(3, 2));
	return (0);
}*/
