/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:25:15 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/06/07 11:27:24 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*program_name;

	while (argc < 2)
	{
		program_name = argv[0];
		while (*program_name)
		{
			write(1, program_name, 1);
				program_name++;
		}
		break ;
	}
	write(1, "\n", 1);
	return (0);
}
