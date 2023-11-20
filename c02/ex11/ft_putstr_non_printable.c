/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:04:00 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/07 23:14:50 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	bs;

	bs = 92;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] < 32 || str[i] > 126))
			write (1, &str[i], 1);
		else
		{
			write (1, &bs, 1);
			write (1, &"0123456789abcdef"[str[i] / 16], 1);
			write (1, &"0123456789abcdef"[str[i] % 16], 1);
		}
		i++;
	}

}

/* int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return (0);
} */
