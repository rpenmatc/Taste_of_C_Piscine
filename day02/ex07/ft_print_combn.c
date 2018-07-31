/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <rpenmatc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 02:10:37 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/19 12:47:22 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *c)
{
	while (*c != '\0')
	{
		ft_putchar(*c);
		c++;
	}
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

int		factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

int		get_pow(int base, int exponent)
{
	if (exponent == 0)
	{
		return (1);
	}
	else if (exponent == 1)
	{
		return (base);
	}
	return (base * get_pow(base, exponent - 1));
}

void	get_numbers(int n, int *numbers)
{
	int prefixes[factorial(10) / (factorial(n - 1) * factorial(10 - (n - 1)))];
	int *prefixes_iterate;
	int length;
	int i;
	int j;

	if (n == 1)
	{
		i = -1;
		while (++i <= 9)
			*(numbers++) = i;
		return ;
	}
	length = factorial(10) / (factorial(n - 1) * factorial(10 - (n - 1)));
	get_numbers(n - 1, prefixes);
	prefixes_iterate = prefixes;
	i = 0;
	while (i++ < length)
	{
		j = (*prefixes_iterate % 10) + 1;
		while (j <= 9)
			*(numbers++) = (*prefixes_iterate * 10) + j++;
		prefixes_iterate++;
	}
}

void	ft_print_combn(int n)
{
	int numbers[factorial(10) / (factorial(n) * factorial(10 - n))];
	int *numbers_iterate;
	int zero_limit;
	int i;

	get_numbers(n, numbers);
	numbers_iterate = numbers;
	zero_limit = get_pow(10, n - 1);
	i = 0;
	while (i++ < factorial(10) / (factorial(n) * factorial(10 - n)))
	{
		if (*numbers_iterate < zero_limit && zero_limit != 1)
			ft_putchar('0');
		ft_putnbr(*(numbers_iterate++));
		ft_putstr(", ");
	}
	ft_putstr("\b \b\b \b");
}
