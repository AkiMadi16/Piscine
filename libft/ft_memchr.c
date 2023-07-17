/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:24:34 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/07/17 15:27:35 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
			i++;
	}
	return (NULL);
}

/*int main()
{
    char str[] = "Hello World!";
    int c = 'W';
    size_t n = 13;
    void *result;

    result = ft_memchr(str, c, n);

    if (result != NULL)
    {
       printf("Character found at position: %ld\n", (char *)result - str);
    }
    else{
       printf("Charactor not found.\n");
    }
   
    return (0);
}*/
