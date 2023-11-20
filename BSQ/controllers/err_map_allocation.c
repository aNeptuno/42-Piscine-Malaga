/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_map_allocation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:19:02 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/16 13:19:07 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	err_map_allocation(char **map)
{
	if (map == NULL)
	{
		throw_error("map error");
		return (1);
	}
	return (0);
}
