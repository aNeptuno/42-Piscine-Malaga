/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:14:41 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/14 17:45:57 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		size;
	int		*buff;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	buff = malloc(sizeof(int) * size);
	if (buff == NULL)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	*range = buff;
	while (i < size)
	{
		buff[i] = min + i;
		i++;
	}
	return (size);
}
