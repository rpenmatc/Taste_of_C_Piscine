#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_pustr(char *str)
{
    while (*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}

void    ft_print_comb2(void)
{
    int     i;
    int     c;

    i = -1;
    while (++i <= 99)
    {
        c = i;
        while (++c <= 99)
        {
            ft_putchar((i / 10) + '0');
            ft_putchar((i % 10) + '0');
            ft_putchar(' ');
            ft_putchar((c / 10) + '0');
            ft_putchar((c % 10) + '0');
            if (i != 98)
                ft_pustr(", ");
        }
    }
}

int main()
{
    ft_print_comb2();
}