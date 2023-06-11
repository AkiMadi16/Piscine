/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:54:34 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/06/07 16:24:53 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb <= 0)
		return (0);
	while ((sqrt * sqrt) < nb && (sqrt <= 46340))
	{
		if (sqrt > (nb / 2))
			break ;
		sqrt++;
	}
	if ((sqrt * sqrt) == nb)
		return (sqrt);
	return (0);
}

/*int	main(void)
{
	int nb = 4;

	while (nb < 100)
	{
   		int sqrt = ft_sqrt(nb);
		printf("sqroot of %i is: %d\n", nb, sqrt);
		nb++;
	}
	return (0);
}*/
