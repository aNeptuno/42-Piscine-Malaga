/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_first_line_valid.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:28:38 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/15 14:28:40 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_first_line_valid(const char *buff, t_fl *fl)
{
	char		firstline[10];
	int			i;

	if (buff == NULL || buff[0] == '\0')
		return (0);
	i = 0;
	while (buff[i] != '\n')
	{
		firstline[i] = buff[i];
		i++;
	}
	if (ft_strlen(firstline) < 4 || !is_numeric(firstline[0]))
		return (0);
	if (is_double(firstline) || !is_printable(firstline))
		return (0);
	(*fl).rows = firstline[0] - '0';
	(*fl).emp = firstline[1];
	(*fl).obs = firstline[2];
	(*fl).full = firstline[3];
	return (1);
}
