/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   throw_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:32:02 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/15 14:32:04 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	throw_error(char *msg)
{
	ft_putstr(msg);
	write(1, "\n", 1);
}
