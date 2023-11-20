/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:22:10 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/07 21:38:34 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (i >= n)
		return (0);
	return (s1[i] - s2[i]);
}

/* int main(void)
{
    //int result1 = ft_strncmp("cccc","Hola",3);
    int result2 = ft_strncmp("Hola","Hoja",1);
    //printf("%d\n",result1);
    printf("%d\n",result2);
    return(0);
} */
