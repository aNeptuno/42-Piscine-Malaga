/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:33:01 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/13 17:04:58 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_substr(char *str, char *charset, int i)
{
	int	j;
	int	k;

	j = 0;
	k = i;
	while (str[k] && charset[j] && str[k] == charset[j])
	{
		k++;
		j++;
	}
	if (k - j == i)
		return (1);
	return (0);
}

int	wdcount(char *str, char *charset)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (str[i])
	{
		while (is_substr(str, charset, i))
			i++;
		while (!is_substr(str, charset, i))
			i++;
		if (!is_substr(str, charset, i))
			cont++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	char	**split;
	int		i;
	int		j;

	size = wdcount(str, charset);
	split = malloc(sizeof(char) * (size + 1));
	i = 0;
	j = 0;
	while (i < size)
	{
		while (str[j] && is_substr(str, charset, j))
			j++;
		while (str[j] && !is_substr(str, charset, j))
		{
			split[i][j] = str[j];
			j++;
		}
		i++;
	}
	split[i] = 0;
	return (split);
}
