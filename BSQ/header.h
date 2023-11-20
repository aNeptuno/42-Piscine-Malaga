/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiban-i <adiban-i@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:27:39 by adiban-i          #+#    #+#             */
/*   Updated: 2023/11/15 14:27:41 by adiban-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H

# define HEADER_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_firstline
{
	char	emp;
	char	obs;
	char	full;
	int		rows;
	int		cols;
	int		size;
}	t_fl;

typedef struct s_square
{
	int		xleft;
	int		yleft;
	int		xright;
	int		yright;
	int		size;
}	t_sqr;

typedef struct s_pos
{
	int		i;
	int		j;
}	t_pos;

// Controllers
int		is_valid(char **map);
int		is_first_line_valid(const char *buff, t_fl *fl);
int		is_numeric(char c);
int		is_double(char *str);
int		is_printable_char(char c);
int		is_printable(char *str);
int		is_valid_char(char c, t_fl *fl);
int		err_map_allocation(char **map);
int		is_map_valid(char **map, t_fl *fl);
int		are_map_chars_valid(char **map, t_fl *fl);

// Error
void	throw_error(char *msg);

// Tools
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_strlen(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

// Functions
char	**get_map(const char *filename, t_fl *fl);
char	**get_map_from_stdin(int *rows, int *cols);
void	print_map(char **map, int rows, int cols);
void	get_num_of_cols_and_rows(t_fl *fl, char *buff, int by_rd);
char	**fill_map(t_fl *fl, char *buff, char **map);

// Solve functions
void	print_solution(char **map, t_fl *fl, t_sqr *sqr);
int		checkdiag(t_pos *pos, char **map, int n, t_fl *fl);
int		calcsize(t_pos *pos, char **map, t_fl *fl);
void	solve(char **map, t_fl *fl, t_sqr *sqr, t_pos *pos);

#endif
