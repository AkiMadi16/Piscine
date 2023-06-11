/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeatley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:25:59 by akeatley          #+#    #+#             */
/*   Updated: 2023/06/11 16:52:06 by mmeegaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	write_array(int *board, int size)
{
	int		count;
	char	number;

	count = 0;
	while (count < size)
	{
		number = board[count++] + 48;
		write(1, &number, 1);
	}
	write(1, "\n", 1);
}

int	attack_check(int board[10], int row)
{
	int	count;
	int	gap;

	count = 0;
	while (count < row)
	{
		gap = row - count;
		if (board[row] == board[count])
		{
			return (0);
		}
		else if (board[row] == board[count] - gap)
		{
			return (0);
		}
		else if (board[row] == board[count] + gap)
		{
			return (0);
		}
		count++;
	}
	return (1);
}

int	find_matches(int board[10], int row)
{
	int	matches;
	int	column;

	column = 0;
	matches = 0;
	if (row == 10)
	{
		write_array(board, 10);
		return (1);
	}
	else
	{
		while (column < 10)
		{
			board[row] = column;
			if (attack_check(board, row) == 1)
			{
				matches += find_matches(board, row + 1);
			}
			column++;
		}
		return (matches);
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	matches;
	int	board[10];

	matches = 0;
	matches = find_matches(board, 0);
	return (matches);
}
/*
int	main(void)
{
	//ft_ten_queens_puzzle();
	printf("%d\n", ft_ten_queens_puzzle());
	return(0);
}
*/
