/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:13:26 by npaturzo          #+#    #+#             */
/*   Updated: 2023/06/06 16:11:36 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_ans(int arr[])
{
	int		i;
	char	w;

	i = 0;
	w = '0';
	while (i < 10)
	{
		w = '0' + arr[i];
		write(1, &w, 1);
		i++;
	}
	write (1, "\n", 1);
}

int	check_ans(int arr[], int p)
{
	int	i;

	i = 1;
	if (p == 0)
		return (1);
	while (i < p + 1)
	{
		if (arr[p - i] == arr[p])
			return (0);
		if (arr[p - i] == (arr[p] - i))
			return (0);
		if (arr[p - i] == (arr[p] + i))
			return (0);
		i++;
	}
	if (p == 9)
	{
		write_ans(arr);
	}
	return (1);
}

int	increment(int arr[], int p, int v)
{
	int	i;
	int	ret;

	ret = 0;
	i = 0;
	if (p == 10)
	{
		return (1);
	}
	arr[p] = v;
	if (check_ans(arr, p) == 1)
	{
		while (i < 10)
		{
			ret += increment(arr, p + 1, i);
			i++;
		}
	}
	return (ret);
}

void	init_arr(int arr[])
{
	int	i;

	i = 0;
	while (i < 10)
	{
		arr[i] = 0;
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	ret;
	int	i;
	int	arr[10];

	i = 0;
	ret = 0;
	init_arr(arr);
	while (i < 10)
	{
		ret += increment(arr, 0, i);
		i++;
	}
	return (ret / 10);
}
#include <stdio.h>
int main(void)
{
	int i =	ft_ten_queens_puzzle();
	printf("found %i solutions!\n", i);
}
