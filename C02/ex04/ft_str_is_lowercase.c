/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:58:35 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/05/30 17:25:19 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char str[] = "acsdefwref";
	char str1[] = "23423CVSDVvfsvf";
	char str2[] = "";

	int result = ft_str_is_lowercase(str);
	int result1 = ft_str_is_lowercase(str1);
	int result2 = ft_str_is_lowercase(str2);

	printf("returns 1 for lowercase: %d\n", result);
	printf("returns 0 for other characters: %d\n", result1);
	printf("returns 1 for empty string: %d\n", result2);

	return 0;
}*/
