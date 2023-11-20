/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:30:21 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/15 14:30:23 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**allocate_row_map(char **map, int rows, int cols)
{
	int	i;

	i = 0;
	while (i < rows)
	{
		map[i] = (char *)malloc((cols + 1) * sizeof(char));
		if (map[i] == NULL)
			return (NULL);
		i++;
	}
	return (map);
}

int	err_by_read(ssize_t by_read, int file_desc)
{
	if (by_read == -1)
	{
		throw_error("Error reading file");
		close(file_desc);
		return (1);
	}
	return (0);
}

char	**get_map(const char *filename, t_fl *fl)
{
	char		buff[10000];
	char		**map;
	int			file_desc;
	ssize_t		by_read;

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		throw_error("Error opening file");
		return (NULL);
	}
	by_read = read(file_desc, buff, sizeof(buff));
	if (err_by_read(by_read, file_desc))
		return (NULL);
	close(file_desc);
	if (!is_first_line_valid(buff, fl))
		throw_error("map error");
	get_num_of_cols_and_rows(fl, buff, by_read);
	map = (char **)malloc(((*fl).rows + 1) * sizeof(char *));
	if (map == NULL)
		return (NULL);
	map = allocate_row_map(map, (*fl).rows, (*fl).cols);
	return (fill_map(fl, buff, map));
}
