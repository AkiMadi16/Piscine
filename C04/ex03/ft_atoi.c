/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:03:56 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/06/05 18:50:45 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] < 33 && str[i] != '\0')
			i++;
	while ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((str[i] > 47 && str[i] < 58) && str[i] != '\0')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result * sign);
}

/*int	main(void)
{
	char str1[] = " ---+--+1234ab567";
	char str2[] = "--+---+1234are324";
	char str3[] = " -+++234";

	int result1 = ft_atoi(str1);
	int result2 = ft_atoi(str2);
	int result3 = ft_atoi(str3);

	printf("%d\n", result1);
	printf("%d\n", result2);
	printf("%d\n", result3);
	return (0);
}*/
