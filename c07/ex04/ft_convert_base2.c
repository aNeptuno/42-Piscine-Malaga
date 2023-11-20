/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:34:20 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/13 14:34:22 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	is_whitespace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*add(char *str, char c)
{
	int	i;

	i = ft_strlen(str);
	if (c == '\0')
		str[i] = 48;
	else
		str[i] = c;
	str[i + 1] = '\0';
	return (str);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	tmp;

	len = 0;
	i = 0;
	while (str[len])
		len++;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
		i++;
	}
	return (str);
}

char	*to_base(long n, char *base_to)
{
	char	*res;
	int		sign;
	int		base_len;

	sign = 1;
	base_len = ft_strlen(base_to);
	res = malloc(sizeof(char) * 51);
	if (res == NULL)
		return (NULL);
	res[0] = '\0';
	if (n < 0)
	{
		n = -n;
		sign *= -1;
	}
	if (n == 0)
		res[0] = base_to[0];
	while (n)
	{
		res = add(res, base_to[n % base_len]);
		n /= base_len;
	}
	if (sign < 0)
		res = add(res, '-');
	return (ft_strrev(res));
}
