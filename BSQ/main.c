/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:27:21 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/15 14:27:24 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	free_mem(char **map, int rows)
{
	int	i;

	i = 0;
	while (i < rows)
	{
		free(map[i]);
		i++;
	}
	free(map);
}

int	solve_and_free_mem(char **map, t_fl *fl, t_sqr *sqr, t_pos *pos)
{
	solve(map, fl, sqr, pos);
	free_mem(map, fl->rows);
	return (0);
}

void	init_variables(t_fl *fl, t_sqr *sqr, t_pos *pos)
{
	fl->cols = 0;
	fl->emp = 0;
	fl->full = 0;
	fl->obs = 0;
	fl->rows = 0;
	fl->size = 0;
	pos->i = 0;
	pos->j = 0;
	sqr->size = 0;
	sqr->xleft = 0;
	sqr->yleft = 0;
	sqr->xright = 0;
	sqr->yright = 0;
}

int	main(int ac, char **av)
{
	char	**map;
	int		i;
	t_fl	s_fl;
	t_sqr	s_sqr;
	t_pos	s_pos;

	init_variables(&s_fl, &s_sqr, &s_pos);
	map = malloc (sizeof(char) * 10000);
	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			map = get_map(av[i++], &s_fl);
			if (err_map_allocation(map))
				return (0);
		}
	}
	else
	{
		map = get_map_from_stdin(&(s_fl.rows), &(s_fl.cols));
		if (err_map_allocation(map))
			return (0);
	}
	return (solve_and_free_mem(map, &s_fl, &s_sqr, &s_pos));
}
