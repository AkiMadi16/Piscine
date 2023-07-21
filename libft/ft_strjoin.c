/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:50:12 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/07/21 12:16:30 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*result;
	size_t	i;
	size_t	j;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	result = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len_s1)
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len_s2)
	{
		result[len_s1 + j] = s2[j];
		j++;
	}
	result[len_s1 + len_s2] = '\0';
	return (result);
}

/*int	main()
{
	char *prefix = "Hello ";
	char *suffix = "world!";
	char *result = ft_strjoin(prefix, suffix);

	if (result == NULL)
	{
		printf("Error: Memmory allocation failed.\n");
		return (1);
	}

	printf("Result: %s\n", result);
	free(result);
	return (0);
}*/
