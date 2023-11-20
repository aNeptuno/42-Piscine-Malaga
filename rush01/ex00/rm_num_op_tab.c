#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int str_len_zero(char *str);

void    add_to_tab(int i, int j, int num, char (*tab)[4][4], char (*op_tab)[4][4][4]);

char	*ft_strncpy(char *dest, char *src, unsigned int n);

void    rm_num_op_tab(char (*op_tab)[4][4][4], char (*tab)[4][4], int i, int j , int to_change)
{
    int index;

    op_tab[0][i][j][to_change - 1] = '0';

    if (str_len_zero(op_tab[0][i][j]) == 1 && tab[0][i][j] == '0')
    {
        index = 0;
        while (index < 4 && op_tab[0][i][j][index] == '0')
            index++;
        add_to_tab(i, j, op_tab[0][i][j][index] - '0', tab, op_tab);
    }
}