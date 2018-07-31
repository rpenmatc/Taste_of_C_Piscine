/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 10:43:33 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/18 10:43:36 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

int		check(char *base)
{
	int	i;
	int	z;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		size;
	int		n[32];

	i = 0;
	size = 0;
	if (!check(base))
		return ;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	while (base[size])
		size += 1;
	while (nbr)
	{
		n[i] = nbr % size;
		nbr = nbr / size;
		i++;
	}
	while (i > 0)
		ft_putchar(base[n[--i]]);
}
