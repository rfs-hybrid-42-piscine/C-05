/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:17:30 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/25 03:14:39 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn int ft_find_next_prime(int nb)
 * @brief Finds the closest prime number greater than or equal to nb.
 * @details Embeds the heavily optimized O(sqrt(N)) logic directly to avoid 
 * execution timeouts on large sequential evaluations.
 * @param nb The baseline starting integer.
 * @return The next valid prime number.
 */
int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (2);
	while (1)
	{
		i = 2;
		while (i <= nb / i)
		{
			if (nb % i == 0)
				break ;
			i++;
		}
		if (i > nb / i)
			return (nb);
		nb++;
	}
}
