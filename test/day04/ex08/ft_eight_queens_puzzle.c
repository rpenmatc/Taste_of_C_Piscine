#include <stdlib.h>
#include <math.h>

char a[8][8];

void    ft_printmatrix()
{
    int     i;
    int     j;
    ft_putchar("\n");

    i = 0;
    j = 0;
    while (i++ < 8)
    {
        while (j++ < 8)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }
}



int     get_col(int row)
{
    int i;

    i = 0;
    while (i++ < 8)
    {
        if (a[row][i] == 'Q')
        {
            return (i);
            break;
        }
    }
}

int     possible(int row, int column)
{
    int     i;
    int     marked_col;

    i = 0;
    while (i++ < 8)
    {
        marked_col = get_col(i);
        if ((column == marked_col) || (abs(row - i) == abs(column - marked_col)))
            return (0);
    }
    return (1);
}

void    nqueen(int row)
{
    int     i;
    int     j;

    i = 0;
    if (row < 8)
    {
        while (i++ < 8)
        {
            if (possible(row, i))
            {   
                a[row][i] = 'Q';
                nqueen(row + 1);
                a[row][i] = ' .';
            }
        }
    } else
    {
        ft_putchar("\n Solutions are ");
        ft_printmatrix();
    }
}

int main()
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i++ < 8)
        while (j++ < 8)
            a[i][j] = ' .';
    nqueen(1);
    return (0);
}