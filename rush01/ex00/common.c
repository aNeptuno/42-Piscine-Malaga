#include <unistd.h>
#include <stdio.h>
#include <stdlib.h> 

void	throw_error(char *str)
{
	int	i;

	i = 0;
	write (1, "Error", 5);
	write (1, "\n", 1);
	/* while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1); */
}

int	is_input_valid(char **av)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (av[1][i] != '\0')
	{
		if (av[1][i] != ' ' && (av[1][i] < '1' || av[1][i] > '4'))
			return (0);
		i++;
		count++;
	}
	if (count == 31)
		return (1);
	return (0);
}

void	init_pos(char **av, char *pos)
{
	int	k;
	int	i;

	k = 0;
	i = 0;
	while (av[1][k] != '\0')
	{
		if (av[1][k] != ' ')
		{
			pos[i] = av[1][k];
			i++;
		}
		k++;
	}
	pos[i] = '\0';
}

int	str_len_zero(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < 4)
	{
		if (str[i] != '0')
			len++;
		i++;
	}
	return (len);
}

int	is_num_in_str(char *str, int num)
{
	int	i;

	i = 0;
	while (i < 4 && (str[i] != num + '0'))
		i++;
	return (i < 4);
}