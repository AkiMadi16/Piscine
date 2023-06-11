/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:11:29 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/05/30 17:27:57 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char str[] = "asad2131241jvnbe#$%$%";
	char str1  = 2;
	char str2[] = "";

	int result = ft_str_is_printable(str);
	int result1 = ft_str_is_printable(&str1);
	int result2 = ft_str_is_printable(str2);

	printf("returns 1 for printable: %d\n", result);
	printf("returns 0 for not printable: %d\n", result1);
	printf("returns 1 for empty string: %d\n", result2);

	return 0;
}*/
