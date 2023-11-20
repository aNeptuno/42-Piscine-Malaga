/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:07:20 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/07 21:40:00 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (*str != '\0')
	{
		cont++;
		str++;
	}
	return (cont);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	equal_counter;
	int	to_find_len;

	to_find_len = ft_strlen(to_find);
	equal_counter = 0;
	i = 0;
	if (to_find_len == 0)
		return (str);
	while (str[i] != '\0' && str[i + to_find_len - 1] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && equal_counter != to_find_len)
		{
			j++;
			equal_counter++;
		}
		if (equal_counter == to_find_len)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/* int main(void)
{
    char str[] = "abcholaAhhola";
    char find[] = "re";
    char *ptr = ft_strstr(str, find);
    puts(ptr);
	printf("strstr: %s\n", strstr(str,find));
    return(0);
} */
