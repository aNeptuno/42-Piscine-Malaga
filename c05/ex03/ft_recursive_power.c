/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:58:58 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/09 17:08:19 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	num;

	if (power < 0)
		return (0);
	i = 0;
	num = 1;
	if (power == 0)
		return (1);
	num = nb * ft_recursive_power(nb, power - 1);
	return (num);
}

/*int	main(void)
{
	printf("10ˆ3=%d\n", ft_recursive_power(10,3));
	printf("10ˆ0=%d\n", ft_recursive_power(10,0));
	printf("10ˆ-5=%d\n", ft_recursive_power(10,-5));
	return (0);
} */
