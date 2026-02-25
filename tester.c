/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 03:21:26 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/25 03:22:49 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* --- Master Switch --- */
#ifdef TEST_ALL
# define EX00
# define EX01
# define EX02
# define EX03
# define EX04
# define EX05
# define EX06
# define EX07
# define EX08
#endif

/* --- Prototypes --- */
int	ft_iterative_factorial(int nb);
int	ft_recursive_factorial(int nb);
int	ft_iterative_power(int nb, int power);
int	ft_recursive_power(int nb, int power);
int	ft_fibonacci(int index);
int	ft_sqrt(int nb);
int	ft_is_prime(int nb);
int	ft_find_next_prime(int nb);
int	ft_ten_queens_puzzle(void);

/* --- Main Testing Function --- */
int	main(void)
{
#ifdef EX00
	printf("--- EX00: ft_iterative_factorial ---\n");
	printf("Fact  5: %d (Expected: 120)\n", ft_iterative_factorial(5));
	printf("Fact  0: %d (Expected: 1)\n", ft_iterative_factorial(0));
	printf("Fact -5: %d (Expected: 0)\n\n", ft_iterative_factorial(-5));
#endif

#ifdef EX01
	printf("--- EX01: ft_recursive_factorial ---\n");
	printf("Fact  5: %d (Expected: 120)\n", ft_recursive_factorial(5));
	printf("Fact  0: %d (Expected: 1)\n", ft_recursive_factorial(0));
	printf("Fact -5: %d (Expected: 0)\n\n", ft_recursive_factorial(-5));
#endif

#ifdef EX02
	printf("--- EX02: ft_iterative_power ---\n");
	printf("5^3 : %d (Expected: 125)\n", ft_iterative_power(5, 3));
	printf("5^0 : %d (Expected: 1)\n", ft_iterative_power(5, 0));
	printf("5^-2: %d (Expected: 0)\n\n", ft_iterative_power(5, -2));
#endif

#ifdef EX03
	printf("--- EX03: ft_recursive_power ---\n");
	printf("5^3 : %d (Expected: 125)\n", ft_recursive_power(5, 3));
	printf("5^0 : %d (Expected: 1)\n", ft_recursive_power(5, 0));
	printf("5^-2: %d (Expected: 0)\n\n", ft_recursive_power(5, -2));
#endif

#ifdef EX04
	printf("--- EX04: ft_fibonacci ---\n");
	printf("Index  0: %d (Expected: 0)\n", ft_fibonacci(0));
	printf("Index  4: %d (Expected: 3)\n", ft_fibonacci(4));
	printf("Index  7: %d (Expected: 13)\n", ft_fibonacci(7));
	printf("Index -2: %d (Expected: -1)\n\n", ft_fibonacci(-2));
#endif

#ifdef EX05
	printf("--- EX05: ft_sqrt ---\n");
	printf("Sqrt 16: %d (Expected: 4)\n", ft_sqrt(16));
	printf("Sqrt 25: %d (Expected: 5)\n", ft_sqrt(25));
	printf("Sqrt 26: %d (Expected: 0 - irrational)\n", ft_sqrt(26));
	printf("Sqrt 2147395600: %d (Expected: 46340 - safe max)\n\n", ft_sqrt(2147395600));
#endif

#ifdef EX06
	printf("--- EX06: ft_is_prime ---\n");
	printf("Is 17 prime?: %d (Expected: 1)\n", ft_is_prime(17));
	printf("Is 18 prime?: %d (Expected: 0)\n", ft_is_prime(18));
	printf("Is  1 prime?: %d (Expected: 0)\n", ft_is_prime(1));
	printf("Is 2147483647 prime?: %d (Expected: 1 - INT_MAX)\n\n", ft_is_prime(2147483647));
#endif

#ifdef EX07
	printf("--- EX07: ft_find_next_prime ---\n");
	printf("Next prime after 14: %d (Expected: 17)\n", ft_find_next_prime(14));
	printf("Next prime after  2: %d (Expected: 2)\n", ft_find_next_prime(2));
	printf("Next prime after 2147483647: %d (Expected: 2147483647)\n\n", ft_find_next_prime(2147483647));
#endif

#ifdef EX08
	printf("--- EX08: ft_ten_queens_puzzle ---\n");
	int solutions = ft_ten_queens_puzzle();
	printf("Total Solutions: %d (Expected: 724)\n\n", solutions);
#endif

	return (0);
}
