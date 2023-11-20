/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:06:35 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/01 09:32:43 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (*src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int main ()
{
  char str[80];
  ft_strcat (str,"these ");
  ft_strcat(str,"strings ");
  ft_strcat (str,"are ");
  ft_strcat (str,"concatenated.");
  puts (str);
  return 0;
} */
