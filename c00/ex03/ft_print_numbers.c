/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:06:53 by adiban-i          #+#    #+#             */
/*   Updated: 2023/10/26 17:11:49 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = 48;
	while (c < 58)
	{
		write(1, &c, 1);
		c++;
	}
}

/*
int main(void)
{
	ft_print_numbers();
	return(0);
}
*/
