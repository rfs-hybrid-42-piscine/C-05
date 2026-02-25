/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:50:37 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/25 03:10:36 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn int ft_is_prime(int nb)
 * @brief Determines if a number is prime.
 * @details Algorithmically optimized to run in O(sqrt(N)) time by only 
 * checking divisors up to the square root of the target number.
 * @param nb The integer to evaluate.
 * @return 1 if prime, 0 if not prime.
 */
int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
