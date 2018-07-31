/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 01:05:24 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/18 10:53:53 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
