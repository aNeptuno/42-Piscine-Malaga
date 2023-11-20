/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_solution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:26:55 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/16 13:26:57 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_solution(char **map, t_fl *fl, t_sqr *sqr)
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
			if ((i >= sqr->xleft && i <= sqr->xright)
				&& (j >= sqr->yleft && j <= sqr->yright))
			{
				ft_putchar(fl->full);
			}
			else
			{
				ft_putchar(map[i][j]);
			}
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
