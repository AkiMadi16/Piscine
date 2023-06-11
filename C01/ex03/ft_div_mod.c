/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:31:55 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/05/25 10:34:41 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	num1 = 4;
	int num2 = 2;
	int divResult = 0;
	int modResult = 0;

	ft_div_mod(num1, num2, &divResult, &modResult);
	printf("Divided a by b : %d\n", divResult);
	printf("Remainder value of a and b: %d\n", modResult);
	return (0);
}*/
