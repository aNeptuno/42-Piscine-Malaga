/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:18:57 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/12 16:14:18 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb == 2147483647)
		return (nb);
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}

/* int	main(void)
{
	printf("Next prime of 5: %d\n",ft_find_next_prime(5));
	printf("Next prime of 1200: %d\n",ft_find_next_prime(1200));
	printf("1201 es primo?: %d\n",ft_is_prime(1201));
	printf("Next prime of %d: %d\n",INT_MAX, ft_find_next_prime(INT_MAX));
	printf("%d es primo?: %d\n",INT_MAX, ft_is_prime(INT_MAX));
	printf("Next prime of %d: %d\n",INT_MAX - 20, 
	ft_find_next_prime(INT_MAX - 20));
	printf("%d es primo?: %d\n",INT_MAX, ft_is_prime(INT_MAX - 8328));
	return (0);
}
 */
