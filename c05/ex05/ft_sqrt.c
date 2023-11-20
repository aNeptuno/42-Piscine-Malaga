/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:12:12 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/12 15:05:52 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
	int	root;

	if (nb <= 0)
		return (0);
	root = 1;
	while (root * root <= nb && root <= 46340)
	{
		if (root * root == nb)
			return (root);
		root++;
	}
	return (0);
}

/*int	main(void)
{
	printf("Raiz no entera: Ej raiz de 2: %d\n",ft_sqrt(2));
	printf("Raiz entera: Ej raiz de %d: %d\n",INT_MAX, ft_sqrt(INT_MAX));
	printf("Raiz entera: Ej raiz de 1495729: %d\n",ft_sqrt(1495729));
	printf("Raiz entera: Ej raiz de 16: %d\n",ft_sqrt(16));
	return (0);
}*/
