/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:51:23 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/09 16:53:09 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		write(1, &str[c], 1);
		c++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}

void	ft_swap(char *avj, char *avmin)
{
	char	*aux;

	aux = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	*aux = *avj;
	*avj = *avmin;
	*avmin = *aux;
}

void	ft_print_arguments(char **av, int ac)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		i++;
	}
	return ;
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	int		min;
	char	*aux;

	aux = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	i = 1;
	while (i <= ac - 2)
	{
		min = i;
		j = i + 1;
		while (j <= ac - 1)
		{
			if (ft_strcmp (av[j], av[min]) < 0)
			{
				aux = av[j];
				av[j] = av[min];
				av[min] = aux;
			}
			j++;
		}
		i++;
	}
	ft_print_arguments(av, ac);
	return (0);
}
