#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while (*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = -1;
	while (++i <= 9)
	{
		j = i;
		while (++j <= 9)
		{
			k = j;
			while (++k <= 9)
			{
				ft_putchar(i + '0');
				ft_putchar(j + '0');
				ft_putchar(k + '0');
				ft_putstr(", ");
			}
		}
	}
	ft_putstr("\b \b\b \b");
}


int main()
{
    ft_print_comb();
}