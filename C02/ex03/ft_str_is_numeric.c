/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:49:18 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/05/30 17:23:28 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}	

/*int main(void)
{
	char str[] = "012332456";
	char str1[] = "@dcvef243526";
    char str2[] = "";

	int result = ft_str_is_numeric(str);
	int result1 = ft_str_is_numeric(str1);
	int result2 = ft_str_is_numeric(str2);

	printf("return 1 for digits: %d\n", result);
	printf("returns 0 for other characters: %d\n", result1);
	printf("returns 1 if str is empty: %d\n", result2);

	return (0);
}*/	
