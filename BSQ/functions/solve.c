/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:15:00 by alvorteg          #+#    #+#             */
/*   Updated: 2023/11/16 13:15:56 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	checkdiag(t_pos *pos, char **map, int n, t_fl *fl)
{
	int	k;
	int	m;
	int	flag;

	k = 0;
	flag = 1;
	while (k < n && flag)
	{
		m = 0;
		while (m < n && flag)
		{
			if (map[pos->i + k][pos->j + m] == fl->obs)
				flag = 0;
			m++;
		}
		k++;
	}
	return (flag);
}

int	check_limit(t_pos *pos, t_fl *fl, int sqrsize)
{
	int	i;
	int	j;

	i = pos->i;
	j = pos->j;
	if ((i + sqrsize <= fl->rows) && (j + sqrsize <= fl->cols))
		return (1);
	return (0);
}

int	calcsize(t_pos *pos, char **map, t_fl *fl)
{
	int	sqrsize;

	sqrsize = 1;
	while (check_limit(pos, fl, sqrsize) && checkdiag(pos, map, sqrsize, fl))
		++sqrsize;
	return (sqrsize - 1);
}

void	solve(char **map, t_fl *fl, t_sqr *sqr, t_pos *pos)
{
	pos->i = 0;
	while ((*pos).i <= (*fl).rows - 1)
	{
		pos->j = 0;
		while ((*pos).j <= (*fl).cols - 1)
		{
			if (map[(*pos).i][(*pos).j] != (*fl).obs)
			{
				if (calcsize(pos, map, fl) > (*sqr).size)
				{
					(*sqr).size = calcsize(pos, map, fl);
					(*sqr).xleft = (*pos).i;
					(*sqr).yleft = (*pos).j;
					(*sqr).yright = (*pos).j + calcsize(pos, map, fl) - 1;
					(*sqr).xright = (*pos).i + calcsize(pos, map, fl) - 1;
				}
			}
			++(*pos).j;
		}
		++(*pos).i;
	}
	if (sqr->size != 0)
		print_solution(map, fl, sqr);
	else
		print_map(map, fl->rows, fl->cols);
}
