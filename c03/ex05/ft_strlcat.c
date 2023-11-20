/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:08:41 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/06 13:08:44 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;

	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (size + ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}

/* int main(void)
{
	char dest[8] = "Hola"; //lenght = 4, size =7
	char src[] = "como";
    unsigned int num = ft_strlcat(dest,src,sizeof(dest));

    //sizeof(dest) es 5, porque son 4 chars + el NULL
    //Entonces copia solo hasta la c (la concatenación queda: Holac)
    //Y al final, se le agrega el caracter nulo 
    //El numero que devuelve es entonces 4 + 4 + 1 = 9
    printf("devuelve: %d\n", num);
    puts(dest);
    return(0);
} */
