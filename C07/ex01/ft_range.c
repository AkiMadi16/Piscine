/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:12:52 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/06/07 18:16:47 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
		return (NULL);
	range = (int *)malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

/*int	main(void)
{
	int	min = 5;
	int	max = 12;
	int	*range = ft_range(min, max);

	if (range != NULL) 
	{
		printf("Range: ");
	   	int	i = 0;
		while (i < max - min)
		{
			printf("%d ", range[i]);
			i++;
		}
		printf("/n");
		free(range);
	}
	return 0;
}*/
