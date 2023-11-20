/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:52:47 by adiban-i          #+#    #+#             */
/*   Updated: 2023/10/29 16:21:28 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	min;
	int	i;
	int	j;

	i = 0;
	while (i <= size - 2)
	{
		min = i;
		j = i + 1;
		while (j <= size - 1)
		{
			if (tab[j] < tab[min])
				min = j;
			j++;
		}
		tmp = tab[i];
		tab[i] = tab[min];
		tab[min] = tmp;
		i++;
	}
}

/*int main(void)
{
	int i = 0;
	int c;
	int tab[8] = { 8,5,4,4,2,20,14,4} ;
	ft_sort_int_tab(tab,8);
	while(i<8)
	{
		c = tab[i];
		printf("tab: %d ",c);
		i++;
	}
	return(0);
}*/