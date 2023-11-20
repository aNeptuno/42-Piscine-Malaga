/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:29:45 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/15 14:29:47 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**fill_map(t_fl *fl, char *buff, char **map)
{
	int		i;
	int		j;
	int		b_ind;

	b_ind = 0;
	while (buff[b_ind] != '\n')
		b_ind++;
	i = 0;
	while (i < fl->rows)
	{
		j = 0;
		while (j < fl->cols)
		{
			if (buff[b_ind] != '\n')
			{
				map[i][j] = buff[b_ind];
				b_ind++;
				j++;
			}
			else
				b_ind++;
		}
		i++;
	}
	return (map);
}
