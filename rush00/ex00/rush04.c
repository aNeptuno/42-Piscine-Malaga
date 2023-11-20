/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01 copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anterron <anterron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:09:07 by adiban-i          #+#    #+#             */
/*   Updated: 2023/10/29 21:48:46 by alpolo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_control_input(int x, int y)
{
	if (x <= 0 || y <= 0)
		return (1);
	return (0);
}

int	ft_check_limit(int i, int j, int x, int y)
{
	if ((j == x - 1 && i == y - 1) && x > 1 && y > 1)
		return (1);
	return (0);
}

void	ft_check_indexes(int i, int j, int x, int y)
{
	if ((j == 0 && i == 0) || ft_check_limit(i, j, x, y) == 1)
		ft_putchar('A');
	else if ((j > 0 && j < x - 1) && (i == 0 || i == y - 1))
		ft_putchar('B');
	else if ((j == x - 1) && i == 0 && x > 1)
		ft_putchar('C');
	else if ((j > 0 && j < x - 1) && (i > 0 || i < y - 1))
		ft_putchar(' ');
	else if ((j == 0 || j == x - 1) && (i > 0 && i < y - 1))
		ft_putchar('B');
	else if (j == 0 && i == y - 1)
		ft_putchar('C');
}

void	rush(int x, int y)
{
	int	i;
	int	j;
	int	error;

	i = 0;
	error = ft_control_input(x, y);
	if (error == 0)
	{
		while (i < y)
		{
			j = 0;
			while (j < x)
			{
				ft_check_indexes(i, j, x, y);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
