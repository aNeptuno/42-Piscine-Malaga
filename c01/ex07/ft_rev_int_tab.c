/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:34:03 by adiban-i          #+#    #+#             */
/*   Updated: 2023/10/29 22:19:53 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
}

/*int main(void)
{
	int i = 0;
	int c;
	int tab[4] = { 1,2,3,4} ;
	ft_rev_int_tab(tab,4);
	while(i<4)
	{
		c = tab[i];
		printf("tab: %d ",c);
		i++;
	}
	return(0);
}*/
