/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:54:50 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/07 23:58:33 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	if (power < 0)
		return (0);
	i = 0;
	num = 1;
	if (power == 0)
		return (1);
	while (i < power)
	{
		num = num * nb;
		i++;
	}
	return (num);
}

/* int	main(void)
{
	printf("10ˆ2=%d\n", ft_iterative_power(10,2));
	printf("10ˆ0=%d\n", ft_iterative_power(10,0));
	printf("10ˆ-5=%d\n", ft_iterative_power(10,-5));
	return (0);
} */
