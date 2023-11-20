/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:01:17 by adiban-i          #+#    #+#             */
/*   Updated: 2023/10/28 17:05:01 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/* int	main(void)
{
	int div;
	int mod;
	int a = 10;
	int b = 2;
	ft_div_mod(a,b,&div,&mod);
	printf("div: %d | mod: %d",div,mod);
	return(0);
} */