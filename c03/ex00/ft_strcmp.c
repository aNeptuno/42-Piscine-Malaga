/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:12:11 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/06 12:52:40 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

/* int main(void)
{
    int result1 = ft_strcmp("Holaaaa","Hola");
    int result2 = ft_strcmp("Hola","Holb");
    int result3= ft_strcmp("Hola","Holaa");
    printf("%d\n",result1);
    printf("%d\n",result2);
    printf("%d\n",result3);
    return(0);
} */
