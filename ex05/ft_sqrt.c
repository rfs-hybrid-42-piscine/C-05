/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:24:11 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/25 03:14:40 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn int ft_sqrt(int nb)
 * @brief Finds the exact square root of a number.
 * @details Optimized with division (root <= nb / root) instead of
 * multiplication to prevent integer overflow crashes on extremely large numbers.
 * @param nb The number to evaluate.
 * @return The square root, or 0 if the root is irrational or negative.
 */
int	ft_sqrt(int nb)
{
	int	root;

	if (nb <= 0)
		return (0);
	root = 1;
	while (root <= nb / root)
	{
		if (root * root == nb)
			return (root);
		root++;
	}
	return (0);
}
