/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:32:24 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/25 03:05:27 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn int ft_iterative_factorial(int nb)
 * @brief Calculates a factorial iteratively.
 * @details Multiplies a running total by a decreasing counter until it hits 1.
 * @param nb The number to calculate the factorial of.
 * @return The factorial result, or 0 if the number is negative.
 */
int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		res = 0;
	else
	{
		res = 1;
		while (nb > 1)
		{
			res *= nb;
			nb--;
		}
	}
	return (res);
}
