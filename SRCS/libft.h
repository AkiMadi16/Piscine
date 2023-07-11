/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeegaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:12:35 by mmeegaha          #+#    #+#             */
/*   Updated: 2023/07/10 15:24:06 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

int ft_atoi(const char *str);

size_t ft_strlen(char *str);
void	ft_strcpy(char	*dest, char *src);

#endif
