/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:28:16 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/07/21 17:16:23 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ptr;
	char	*ptr1;
	size_t	i;

	if (n == 0)
		return (0);
	ptr = (char *)s1;
	ptr1 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr[i] != ptr1[i])
			return ((unsigned char)ptr[i] - (unsigned char)ptr1[i]);
		i++;
	}
	return (0);
}

/*int main()
{
    char str1[] = "Hello";
    char str2[] = "World!";
    int result;

    result = ft_memcmp(str1, str2, 5);

    printf("Comparison result: %d\n", result);
    return (0);
}*/
