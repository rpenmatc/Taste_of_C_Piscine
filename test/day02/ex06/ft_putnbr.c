#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

int		get_nth_digit(int n, int number)
{
	int i;

	i = 1;
	while (i < n)
	{
		number /= 10;
		i++;
	}
	return (number % 10);
}

int		get_num_length(int number)
{
	int i;

	i = 0;
	while (number > 0)
	{
		number /= 10;
		i++;
	}
	return (i);
}

void	ft_putnbr(int n)
{
	int i;

	if (n == 0)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return ;
	}
	else if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	i = get_num_length(n);
	while (i > 0)
	{
		ft_putchar(get_nth_digit(i, n) + '0');
		i--;
	}
}

int main()
{
    ft_putnbr(-44);
}