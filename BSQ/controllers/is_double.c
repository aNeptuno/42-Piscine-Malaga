/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_double.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:29:05 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/15 14:29:06 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_double(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	while (i < 4)
	{
		c = str[i];
		j = 0;
		while (str[j])
		{
			if (str[j] == c && j != i)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
