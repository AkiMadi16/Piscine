/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowercase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:09:44 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/05/30 18:17:24 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' || str[i] <= 'Z')
		{
			str[i] += 32;
			i++;
		}
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "HELLOWORLD";

	printf("%s", ft_strlowercase(str));
	return (0);
}*/
