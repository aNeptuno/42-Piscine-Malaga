/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:40:18 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/09 01:51:56 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	divisor(int nb)
{
	int	div;

	div = 2;
	if (nb == div)
		return (div);
	while (div <= nb)
	{
		if (nb % div == 0)
			return (div);
		div++;
	}
	return (div);
}

int	ft_is_prime(int nb)
{
	int	div;

	div = divisor(nb);
	return (nb == div);
}

/* int	main(void)
{
	printf("5 es primo?: %d\n",ft_is_prime(5));
	printf("20 es primo?: %d\n",ft_is_prime(20));
	return (0);
} */
