/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaksimo <emaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:15:32 by emaksimo          #+#    #+#             */
/*   Updated: 2022/10/12 03:47:25 by emaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	ft_cons(int x, int board[])
{
	int	i;
	int	tmp;

	i = 0;
	while (i < x)
	{
		tmp = board[x] - board[i];
		if (tmp < 0)
			tmp *= -1;
		if (board[x] == board[i] || x - i == tmp)
			return (0);
		i++;
	}
	return (1);
}

void	board_print(int board[])
{
	int		i;
	char	tmp;

	i = 0;
	while (i < 10)
	{
		tmp = board[i] + 48;
		write(1, &tmp, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	is_queen(int x, int *cn, int board[])
{
	int	i;

	i = 0;
	if (x == 10)
	{
		*cn += 1;
		board_print(board);
		return ;
	}
	while (i < 10)
	{
		board[x] = i;
		if (ft_cons(x, board))
			is_queen(x + 1, cn, board);
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	cn;
	int	i;
	int	board[10];

	cn = 0;
	i = 0;
	while (i < 10)
		board[i++] = 0;
	is_queen(0, &cn, board);
	return (cn);
}
