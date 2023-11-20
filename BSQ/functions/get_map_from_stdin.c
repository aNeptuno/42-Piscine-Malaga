/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_from_stdin.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:29:56 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/15 14:29:58 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**allocate_row_map_stdin(char **map)
{
	int	i;

	i = 0;
	map[i] = malloc(100 * sizeof(char));
	if (map[i] == NULL)
	{
		throw_error("map error");
		return (NULL);
	}
	return (map);
}

/* int	err_map_allocation(char **map)
{
	if (map == NULL)
	{
		throw_error("map error");
		return (1);
	}
	return (0);
} */

char	**get_map_from_stdin(int *rows, int *cols)
{
	char	**map;
	char	buff[1000];
	int		flag;
	int		i;
	ssize_t	bytes_read;

	map = (char **)malloc(100 * sizeof(char *));
	if (err_map_allocation(map))
		return (NULL);
	flag = 1;
	i = 0;
	while (flag)
	{
		bytes_read = read(STDIN_FILENO, buff, sizeof(buff));
		if (bytes_read == 0)
			flag = 0;
		buff[bytes_read] = '\0';
		map = allocate_row_map_stdin(map);
		ft_strncpy(map[i], buff, bytes_read);
		*cols = bytes_read;
		i++;
	}
	*rows = i;
	return (map);
}
