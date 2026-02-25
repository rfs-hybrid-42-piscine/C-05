/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 02:44:54 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/25 03:20:20 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

/**
 * @fn static bool is_safe(int row, int col, int *queens)
 * @brief Checks if a queen can be safely placed at the given row and col.
 * @details Iterates through the previously placed queens to ensure the new 
 * queen does not share the same column or fall on the same diagonals.
 * @param row The current row being evaluated.
 * @param col The column being evaluated for safety.
 * @param queens The array storing the column positions of previous queens.
 * @return true if the position is safe from attack, false otherwise.
 */
static bool	is_safe(int row, int col, int *queens)
{
	int	i;

	i = -1;
	while (++i < row)
		if (queens[i] == col
			|| queens[i] - i == col - row
			|| queens[i] + i == col + row)
			return (false);
	return (true);
}

/**
 * @fn static void solve(int *n, int row, int *queens)
 * @brief Recursive backtracking solver for the N-Queens problem.
 * @details Explores all possible safe placements of queens row by row. If a 
 * valid placement of 10 queens is found, it prints the board configuration 
 * and increments the master solution counter.
 * @param n A pointer to the total solution counter.
 * @param row The current row index being processed.
 * @param queens The array representing the board state.
 */
static void	solve(int *n, int row, int *queens)
{
	char	c;
	int		col;

	if (row == 10)
	{
		(*n)++;
		row = -1;
		while (++row < 10)
		{
			c = queens[row] + '0';
			write(1, &c, 1);
		}
		write(1, "\n", 1);
		return ;
	}
	col = -1;
	while (++col < 10)
	{
		if (is_safe(row, col, queens))
		{
			queens[row] = col;
			solve(n, row + 1, queens);
		}
	}
}

/**
 * @fn int ft_ten_queens_puzzle(void)
 * @brief Orchestrates the recursive evaluation of the 10-queens puzzle.
 * @details Initializes the board array and the solution counter, then triggers 
 * the recursive backtracking algorithm starting from the very first row.
 * @return The total number of valid solutions discovered (724).
 */
int	ft_ten_queens_puzzle(void)
{
	int	queens[10];
	int	total;

	total = 0;
	solve(&total, 0, queens);
	return (total);
}
