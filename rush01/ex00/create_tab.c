#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    throw_error(char *str);

int str_len_zero(char *str);

void    rm_num_op_tab(char (*op_tab)[4][4][4], char (*tab)[4][4], int i, int j , int to_change);

int     is_num_in_str(char *str, int num);

void    add_to_tab(int i, int j, int num, char (*tab)[4][4], char (*op_tab)[4][4][4])
{
    char *str;

    str = (char*)malloc(4*4);
    if(str)
    {
        str = &op_tab[0][i][j][0]; 
        int k;
        if (tab[0][i][j] == '0')
        {
            if (!is_num_in_str(str, num))
            {
                throw_error("Caso no posible en pos_tab");
                //throw_error(str);
                //si no es una posibilidad en la tabla de las posibilidades
            }
            else
            {
                tab[0][i][j] = num + '0';
                k = 0;
                while (k < 4)
                {
                    rm_num_op_tab(op_tab, tab, k, j, num);
                    rm_num_op_tab(op_tab, tab, i, k, num);
                    k++;
                }
                //printf("Me llama la columna %d para imprimir el %d\n",j,num);
            }
        }
    }
    else if (tab[0][i][j] - '0' != num)
    {
        throw_error("Imposible, numeros no coinciden.");
    }
}

void    create_col_up(int j, char pos_num, char (*tab)[4][4], char (*op_tab)[4][4][4])
{
    int i;
    int k;
    
    if (pos_num == '4')
    {
        i = 0;
        while (i < 4)
        {
            add_to_tab(i, j, 1 + i, tab, op_tab);
            i++;
        }
    }
    if (pos_num == '1')
    {
        add_to_tab(0, j, 4, tab, op_tab);
    }
    if (pos_num == '2')
    {
        rm_num_op_tab(op_tab, tab, 0, j, 4);
    }
    if (pos_num == '3')
    {
        rm_num_op_tab(op_tab, tab, 0, j, 4);
        rm_num_op_tab(op_tab, tab, 0, j, 3);
    }

}

void    create_col_down(int j, char pos_num, char (*tab)[4][4], char (*op_tab)[4][4][4])
{
    int i;
    int k;

    if (pos_num == '4')
    {
        i = 0;
        while (i < 4)
        {
            add_to_tab(i, j, 4 - i, tab, op_tab);
            i++;
        }
    }
    if (pos_num == '1')
    {
        add_to_tab(3, j, 4, tab, op_tab);

    }
    if (pos_num == '2')
    {
        rm_num_op_tab(op_tab, tab, 3, j, 4);
    }
    if (pos_num == '3')
    {
        rm_num_op_tab(op_tab, tab, 3, j, 4);
        rm_num_op_tab(op_tab, tab, 3, j, 3);
    }
}

void    create_row_left(int i, char pos_num, char (*tab)[4][4], char (*op_tab)[4][4][4])
{
    int j;
    int k;

    if (pos_num == '4')
    {
        j = 0;
        while (j < 4)
        {
            add_to_tab(i, j, 1 + j, tab, op_tab);
            j++;
        }
    }
    if (pos_num == '1')
    {
        add_to_tab(i, 0, 4, tab, op_tab);
    }
    if (pos_num == '2')
    {
        rm_num_op_tab(op_tab, tab, i, 0, 4);
    }
    if (pos_num == '3')
    {
        rm_num_op_tab(op_tab, tab, i, 0, 4);
        rm_num_op_tab(op_tab, tab, i, 0, 3);
    }
    
}

void    create_row_right(int i, char pos_num, char (*tab)[4][4], char (*op_tab)[4][4][4])
{
    int j;
    int k;

    if (pos_num == '4')
    {
        j = 0;
        while (j < 4)
        {
            add_to_tab(i, j, 4 - j, tab, op_tab);
            j++;
        }
    }
    if (pos_num == '1')
    {
        add_to_tab(i, 3, 4, tab, op_tab);
    }
    if (pos_num == '2')
    {
        rm_num_op_tab(op_tab, tab, i, 3, 4);
    }
    if (pos_num == '3')
    {
        rm_num_op_tab(op_tab, tab, i, 3, 4);
        rm_num_op_tab(op_tab, tab, i, 3, 3);
    }
}