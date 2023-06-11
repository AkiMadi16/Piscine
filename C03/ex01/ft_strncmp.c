/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:36:02 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/06/01 15:50:16 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned int)s1[i] -(unsigned int)s2[i]);
}

/*int	main(void)
{
	char s1[] = "HelloWorld";
	char s2[] = "HelloWor";

	printf("%d\n", strncmp(s1, s2, 9));
	printf("%d\n", ft_strncmp(s1, s2, 9));
	printf("%d\n", strncmp("Hi", "Hi", 2));
	printf("%d\n", ft_strncmp("Hi", "Hi", 2));
	
	return (0);
}*/	
