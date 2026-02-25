/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:39:40 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/25 03:05:39 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn int ft_recursive_factorial(int nb)
 * @brief Calculates a factorial recursively.
 * @details The base case triggers at 0, unwinding the call stack to multiply
 * the accumulated values.
 * @param nb The number to calculate the factorial of.
 * @return The factorial result, or 0 if the number is negative.
 */
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
