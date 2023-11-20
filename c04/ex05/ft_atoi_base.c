/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:51:32 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/11 22:04:34 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	is_char_of_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0' && base[i] != c)
		i++;
	return (!(base[i] == '\0'));
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	parse_to_dec(char c, char *base)
{
	int	j;

	j = 0;
	while (base[j] && c != base[j])
		j++;
	return (j);
}

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

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	num;
	int	base_len;

	base_len = 0;
	while (base[base_len])
	{
		if (base[base_len] == '+' || base[base_len] == '-')
			return ;
		base_len++;
	}
	if (base_len < 2 || check_doubles(base))
		return ;
	sign = 1;
	num = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (is_char_of_base(*str, base))
	{
		num = num * ft_strlen(base) + parse_to_dec(*str, base);
		str++;
	}
	return (num * sign);
}

/* int main(void)
{	
	printf("%d\n",ft_atoi_base("1df","0123456789abcdef"));

    return (0);
} */
