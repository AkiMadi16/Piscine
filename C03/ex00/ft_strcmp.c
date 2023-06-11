/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:35:36 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/06/01 14:35:44 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned int)(s1[i]) -(unsigned int)(s2[i]));
}

/*int	main(void)
{
	char s1[] = "Hello";
	char s2[] = "He";

	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp("ab", "ab"));
	printf("%d\n", ft_strcmp("ab", "ab"));
	return (0);
}*/
