/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:06:14 by adiban-i          #+#    #+#             */
/*   Updated: 2023/10/29 22:03:29 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	if (b != 0)
	{
		tmp = (*a) / (*b);
		*b = (*a) % (*b);
		*a = tmp;
	}
}

/* int	main(void)
{
	int a = 10;
	int b = 2;
	ft_ultimate_div_mod(&a,&b);
	
	printf("La variable a: %d\n", a);
	printf("La variable b: %d\n",b);

	return(0);
} */