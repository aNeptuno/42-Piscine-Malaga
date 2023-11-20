/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 01:13:02 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/14 17:42:46 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		size;
	int		i;
	char	*cpy;

	i = 0;
	size = ft_strlen(str) + 1;
	cpy = malloc(sizeof(char) * (size));
	if (cpy == NULL)
		return (NULL);
	while (i <= size)
	{
		cpy[i] = str[i];
		i++;
	}
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*table;
	int			i;

	table = malloc(sizeof(t_stock_str) * (ac + 1));
	if (table == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		table[i].size = ft_strlen(av[i]);
		table[i].str = av[i];
		table[i].copy = ft_strdup(av[i]);
		i++;
	}
	table[i].str = 0;
	table[i].copy = 0;
	return (table);
}

/* void	ft_show_tab(struct s_stock_str *par);

int main(int ac, char **av)
{
	char **argv;
	argv = av;
	argv++;
	t_stock_str	*table;
	table = ft_strs_to_tab(ac, argv);
	ft_show_tab(table);
	return(0);
} */
