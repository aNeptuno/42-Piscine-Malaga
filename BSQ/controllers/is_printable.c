/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_printable.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:28:48 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/15 14:28:49 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (i < 4)
	{
		c = str[i];
		if (!(c >= 32 && c <= 126))
			return (0);
		i++;
	}
	return (1);
}
