/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_map_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:19:44 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/16 13:19:50 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	are_map_chars_valid(char **map, t_fl *fl)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < fl->rows)
	{
		j = 0;
		while (j < fl->cols)
		{
			if (!is_valid_char(map[i][j], fl))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_map_valid(char **map, t_fl *fl)
{
	if (!are_map_chars_valid(map, fl))
	{
		throw_error("map error.");
		return (0);
	}
	return (1);
}
