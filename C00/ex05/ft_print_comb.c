/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:09:50 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/05/22 12:34:55 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	m;
	int	n;
	int	o;

	m = '0';
	while (m <= '7')
	{
		n = m + 1;
		while (n <= '8')
		{
			o = n + 1;
			while (o <= '9')
			{
				write(1, &m, 1);
				write(1, &n, 1);
				write(1, &o, 1);
				if (m != '7' || n != '8' || o != '9')
					write(1, ", ", 2);
					o++;
			}
			n++;
		}
		m++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
