#include <unistd.h>
#include <stdio.h>
#include <stdlib.h> 

void    throw_error(char *str);
int     is_input_valid(char **av);
void    init_pos(char **av, char *pos);

void    create_col_up(int j, char pos_num, char (*tab)[4][4], char (*op_tab)[4][4][4]);
void    create_col_down(int j, char pos_num, char (*tab)[4][4], char (*op_tab)[4][4][4]);
void    create_row_left(int i, char pos_num, char (*tab)[4][4], char (*op_tab)[4][4][4]);
void    create_row_right(int i, char pos_num, char (*tab)[4][4], char (*op_tab)[4][4][4]);

void    print_table(char (*tab)[4][4]);

int main(int ac, char **av)
{
    /* "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
    int     k; */
    
    int     k; 
    char *pos;
    char    (*tab)[4][4];
    char  table[4][4] = {{'0','0','0','0'},
                        {'0','0','0','0'},
                        {'0','0','0','0'},
                        {'0','0','0','0'}};

    char    op_tab[4][4][4] = {{{'1','2','3','4'},{'1','2','3','4'},{'1','2','3','4'},{'1','2','3','4'}},
                            {{'1','2','3','4'},{'1','2','3','4'},{'1','2','3','4'},{'1','2','3','4'}},
                            {{'1','2','3','4'},{'1','2','3','4'},{'1','2','3','4'},{'1','2','3','4'}},
                            {{'1','2','3','4'},{'1','2','3','4'},{'1','2','3','4'},{'1','2','3','4'}}};

    pos = (char*)malloc(4*17);
    tab = &table;

    if (ac >= 2)
    {
        if (is_input_valid(av))
        {
            init_pos(av, pos);
            k = 0;
            while (pos[k] != '\0')
            {
                if (k < 4)
                    create_col_up(k, pos[k], tab, &op_tab);
                else if (k < 8)
                    create_col_down(k % 4, pos[k], tab, &op_tab);
                else if (k < 12)
                    create_row_left(k % 4, pos[k], tab, &op_tab);
                else 
                    create_row_right(k % 4, pos[k], tab, &op_tab);
                k++;
            }
            print_table(tab);
        }
        else
            throw_error("Invalid input");
    }
    else
        throw_error("Invalid number of arguments");
    return (0);
}