#include <unistd.h>
#include <stdio.h>

void    print_table(char (*tab)[4][4])
{
    int     i;
    int     j;
    char    c;

    i = 0;
    while(i < 4)
    {
        j = 0;
        while(j < 4)
        {
            c = tab[0][i][j];
            write(1 , &c, 1);
            write(1, " ",1);
            j++;
        }
        write(1 , "\n", 1);
        i++;
    }
}