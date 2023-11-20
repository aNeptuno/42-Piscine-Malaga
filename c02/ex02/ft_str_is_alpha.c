/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:29:26 by adiban-i          #+#    #+#             */
/*   Updated: 2023/10/28 19:48:11 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		num;
	char	c;

	i = 0;
	num = 1;
	while (num == 1 && str[i] != '\0')
	{
		c = str[i];
		if (c < 'A' || ('Z' < c && c < 'a') || c > 'z')
			num = 0;
		i++;
	}
	return (num);
}

/* int main(void)
{
	int	x;

	x = ft_str_is_alpha("Hola ");
	printf("Resultado: %d",x);
	return (0);
} */