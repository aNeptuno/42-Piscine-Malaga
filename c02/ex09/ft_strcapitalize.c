/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:47:17 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/06 11:48:37 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <unistd.h> */

char	convert_to_uppercase(char c)
{
	if ((c >= 'a' && c <= 'z'))
		c -= 32;
	return (c);
}

int	is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	else if ((c >= 'A' && c <= 'Z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;

	i = 0;
	c = convert_to_uppercase(str[0]);
	str[0] = c;
	i = 1;
	while (i < ft_strlen(str))
	{
		c = str[i];
		if (!is_alphanumeric(str[i - 1]))
		{
			c = convert_to_uppercase(str[i]);
			str[i] = c;
		}
		else if ((c >= 'A' && c <= 'Z'))
		{
			c += 32;
			str[i] = c;
		}
		i++;
	}
	return (str);
}

/* int main (void)
{
    char str[] = "salut, Comment tu vas ? 42mots quaRante-deux; cinquante+et+un";
    char *res;
    res = ft_strcapitalize(str);
    puts(res);
    return (0);
} */