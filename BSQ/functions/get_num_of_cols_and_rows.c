/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_num_of_cols_and_rows.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:30:58 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/15 14:31:00 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	get_num_of_cols_and_rows(t_fl *fl, char *buff, int by_rd)
{
	int	i;
	int	flag_first_row;

	(*fl).rows = 0;
	(*fl).cols = 0;
	i = 0;
	while (buff[i] != '\n')
		i++;
	i++;
	flag_first_row = 0;
	while (i < by_rd)
	{
		while (buff[i] != '\n' && !flag_first_row)
		{
			(*fl).cols += 1;
			i++;
		}
		if (buff[i] && buff[i] == '\n')
		{
			(*fl).rows += 1;
			flag_first_row = 1;
		}
		i++;
	}
}
