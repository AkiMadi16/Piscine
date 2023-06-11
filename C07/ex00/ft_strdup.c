/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:19:08 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/06/10 16:19:35 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char	*src)
{
	char	*dup;
	int		length;
	int		i;

	length = 0;
	i = 0;
	while (src[length] != '\0')
		length++;
	dup = (char *)malloc((length + 1) * sizeof(char));
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*int	main(void)
{
	char src[] = "Hello World!";
	char *dup = ft_strdup(src);

	if (dup != NULL)
	{
		printf("Source string: %s\n", src);
		printf("Duplicate string : %s\n", dup);
		free(dup);
	}
	return 0;
}*/
