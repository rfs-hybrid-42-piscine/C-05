/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:06:18 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/25 03:06:59 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn int ft_fibonacci(int index)
 * @brief Finds the n-th element of the Fibonacci sequence using recursion.
 * @param index The target position in the sequence.
 * @return The sequence value at that index, or -1 if index is negative.
 */
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index < 3)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
