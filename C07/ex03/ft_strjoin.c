/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 14:26:22 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/06/10 16:25:48 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*empty;
	int		total_length;
	int		i;
	int		result_length;
	char	*result;

	if (size == 0)
	{
		empty = (char *)malloc(1 * sizeof(char));
		if (empty == NULL)
			return (NULL);
		empty[0] = '\0';
		return (empty);
	}
	total_length = 0;
	i = 0;
	while (i < size)
		total_length += strlen(strs[i]);
		i++;
	result_length = total_length + (size - 1) * strlen(sep) + 1;
	result = (char *)malloc(result_length * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		strcat(result, strs[i]);
		if (i != size - 1)
			strcat(result, sep);
		i++;
	}
	return (result);
}

/*int	main(void)
{
	char *strs[] = {"Hello", "World", "!", "This", "is", "a", "test"};
	int size = sizeof(strs) / sizeof(strs[0]);
	char *sep = " ";

	char *result = ft_strjoin(size, strs, sep);
	if (result == NULL)
	{
		printf("Error: \n");
		return (0);
	}
	printf("Concatenated string: %s\n", result);
	free(result);
	return (0);
}*/
