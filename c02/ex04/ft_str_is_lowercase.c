/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:55:47 by adiban-i          #+#    #+#             */
/*   Updated: 2023/10/30 11:50:34 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;
	int		num;
	char	c;

	i = 0;
	num = 1;
	while (num == 1 && str[i] != '\0')
	{
		c = str[i];
		if ((c < 'a') || (c > 'z'))
			num = 0;
		i++;
	}
	return (num);
}
