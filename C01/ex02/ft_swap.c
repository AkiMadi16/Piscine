/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:26:17 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/05/25 10:21:23 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;	

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int	main(void)
{
	int	 num1 = 10;
	int num2 = 20;

	printf("before swapping : a=%d , b=%d \n" , num1, num2);
	ft_swap(&num1, &num2);
	printf("Swapped numbers : a=%d , b=%d\n", num1, num2);
	return (0);
}*/
