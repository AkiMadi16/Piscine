/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:50:22 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/06/06 17:50:52 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:01:23 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/06/06 11:39:17 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		result = 0;
	}
	else if (nb == 0 || nb == 1)
	{
		result = 1;
	}
	else
	{
		result = nb;
		while (nb > 1)
		{
			result *= nb - 1;
			nb--;
		}
	}
	return (result);
}

/*int	main(int argc, char *argv[])
{
	int	nb;

	if (argc != 2) {
		printf("%s", argv[0]);
		return (1);
	}

	nb = atoi(argv[1]);
	int factorial = ft_iterative_factorial(nb);
	printf("%d\n", factorial);

	return (0);
}*/
