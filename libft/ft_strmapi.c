/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:53:25 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/07/21 16:14:37 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*result;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)malloc(len * sizeof(char) + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	transform_char(unsigned int index, char c)
{
	return (c + index);
}

/*int	main()
{
	const char *input_str = "Hello World!";
	char *result_str = ft_strmapi(input_str, transform_char);

	printf("Input String: %s\nResult String: %s\n", input_str, result_str);
	free(result_str);
	return (0);
}*/
