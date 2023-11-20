/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:43:55 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/11 19:11:34 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		size;
	int		*res;
	int		i;

	if (min >= max)
		return (NULL);
	size = max - min;
	res = malloc (sizeof(int) * size);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}

/* int main(void)
{
	int *str = ft_range(1,5);
	int i;

	i = 0;
	while ( i < 4)
	{
		printf("%d, ",str[i]);
		i++;
	}
	return(0);
} */
