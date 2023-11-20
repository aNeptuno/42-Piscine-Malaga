/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anterron <anterron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:09:07 by adiban-i          #+#    #+#             */
/*   Updated: 2023/10/29 22:13:10 by alpolo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_control_input(int x, int y)
{
	if (x <= 0 || y <= 0)
		return (1);
	return (0);
}

void	ft_check_indexes(int i, int j, int x, int y)
{
	if (((i == 0) && (j == 0)) || ((i == y - 1) && (j == x - 1)))
		ft_putchar('o');
	else if (((i == 0) && (j == x - 1)) || ((i == y - 1) && (j == 0)))
		ft_putchar('o');
	else if (i == 0 || i == y - 1)
		ft_putchar('|');
	else if (j == 0 || j == x - 1)
		ft_putchar('-');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;
	int	error;

	j = 0;
	error = ft_control_input(x, y);
	if (error == 0)
	{
		while (j < x)
		{
			i = 0;
			while (i < y)
			{
				ft_check_indexes(i, j, x, y);
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}
}
