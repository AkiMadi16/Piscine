/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:10:16 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/05/30 17:26:41 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char str[] = "ASFRGWRG";
	char str1[] = "@$!@$4546SAVegfrw";
	char str2[] = "";

	int result = ft_str_is_uppercase(str);
	int result1 = ft_str_is_uppercase(str1);
	int result2 = ft_str_is_uppercase(str2);

	printf("returns 1 for upcases: %d\n", result);
	printf("returns 0 for other characters: %d\n", result1);
	printf("returns 1 for empty string: %d\n", result2);

	return 0;
}*/
