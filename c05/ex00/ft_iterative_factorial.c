/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:38:38 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/09 17:06:05 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	num;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	num = 1;
	while (i <= nb)
	{
		num = num * i;
		i++;
	}
	return (num);
}

/* int	main(void)
{
	printf("%d\n", ft_iterative_factorial(4));
	return (0);
} */
