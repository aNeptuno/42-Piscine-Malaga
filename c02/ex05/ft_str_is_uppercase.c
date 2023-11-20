/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 21:17:19 by adiban-i          #+#    #+#             */
/*   Updated: 2023/10/30 11:51:08 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		i;
	int		num;
	char	c;

	i = 0;
	num = 1;
	while (num == 1 && str[i] != '\0')
	{
		c = str[i];
		if ((c < 'A') || ('Z' < c))
			num = 0;
		i++;
	}
	return (num);
}
