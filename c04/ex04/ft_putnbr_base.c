/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:50:42 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/07 22:10:00 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

int	check_doubles(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[j] == base[i] && j != i)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_nbr(int nbr, int base_len, char *base)
{
	long	nbr_l;

	nbr_l = nbr;
	if (nbr_l < 0)
	{
		ft_putchar('-');
		nbr_l *= -1;
	}
	if (nbr_l > base_len)
		write_nbr(nbr_l / base_len, base_len, base);
	ft_putchar (base[nbr_l % base_len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = 0;
	while (base[base_len] != '\0')
	{
		if (base[base_len] == '+' || base[base_len] == '-')
			return ;
		base_len++;
	}
	if (base_len < 2)
		return ;
	if (check_doubles(base))
		return ;
	write_nbr(nbr, base_len, base);
}

/* int	main(void)
{
	ft_putnbr_base(200, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(10, "0123456789abcdef");
	return (0);
} */
