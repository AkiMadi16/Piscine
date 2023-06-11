/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:09:16 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/05/30 17:19:17 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			if (!(str[i] >= 'A' && str[i] <= 'Z'))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char str[] = "abcdhwcwysd";
	char str1[] = "12WVWfrfnr";
	char str2[] = "^?!Fevg";
	char str3[] = "";

	int result = ft_str_is_alpha(str);
	int result1 = ft_str_is_alpha(str1);
	int result2 = ft_str_is_alpha(str2);
	int result3 = ft_str_is_alpha(str3);

	printf("returns 1 for str: %i \n", result);
	printf("returns 0 for str1: %i \n", result1);
	printf("returns 0 for str2: %i \n", result2);
	printf("returns 1 for str3: %i \n", result3);

	return 0;
}*/
