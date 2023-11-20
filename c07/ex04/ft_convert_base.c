/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:33:57 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/13 15:52:36 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	*to_base(long n, char *base_to);
int		ft_strlen(char *str);
int		is_whitespace(char c);

int	is_valid(char *base)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (base[i])
	{
		c = base[i];
		if (is_whitespace(base[i]) || base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (base[j])
		{
			if (base[j] == c && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (i > 1);
}

int	is_char_of_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	parse_to_dec(char c, char *base)
{
	int	j;

	j = 0;
	while (base[j])
	{
		if (base[j] == c)
			return (j);
		j++;
	}
	return (j);
}

long	to_decimal(char *nbr, char *base_from)
{
	int		i;
	long	num;
	int		sign;

	i = 0;
	sign = 1;
	num = 0;
	while (is_whitespace(nbr[i]))
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nbr[i] && is_char_of_base(nbr[i], base_from))
	{
		num = num * ft_strlen(base_from) + parse_to_dec(nbr[i], base_from);
		i++;
	}
	return (num * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	n;
	char	*res;

	if (nbr == NULL || !is_valid(base_from) || !is_valid(base_to))
		return (NULL);
	n = to_decimal(nbr, base_from);
	res = to_base(n, base_to);
	return (res);
}

int	main(int argc, char **argv)
{
	char base_from[] = "0123456789ABCDEF";
	char base_to[] = "01";
	
	char *res = ft_convert_base(argv[1], base_from, base_to);
	long int n = to_decimal(argv[1], base_from);
	
	printf("\n\"%s\" en base (\"%s\") = %ld en base (\"0123456789\")\n",argv[1], base_from, n);
	printf("%ld en base (\"0123456789\") = %s en base (\"%s\")\n\n", n, res, base_to);

	printf("%d\n",argc);
	
	free(res);

    return(0);
}
