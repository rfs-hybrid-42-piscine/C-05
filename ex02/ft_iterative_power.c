/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:30:31 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/25 03:06:12 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn int ft_iterative_power(int nb, int power)
 * @brief Calculates an exponent iteratively.
 * @param nb The base number.
 * @param power The exponent.
 * @return The result of nb raised to power, or 0 if power is negative.
 */
int	ft_iterative_power(int nb, int power)
{
	int	nbr;

	nbr = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power > 0)
		nb *= nbr;
	return (nb);
}
