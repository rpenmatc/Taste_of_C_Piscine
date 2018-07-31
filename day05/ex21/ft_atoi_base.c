/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:25:45 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/17 15:30:15 by kagarwal         ###   ########.fr       */
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

int		base_has_str(char *str, char *base)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[j] == str[i])
				return (1);
			j++;
			if (j == ft_strlen(base))
				return (0);
		}
		i++;
	}
	return (1);
}

int		get_number(char *str, char *base, int i)
{
	int j;

	j = 0;
	while (base[j])
	{
		if (str[i] == base[j])
			break ;
		j++;
	}
	return (j);
}

int		ft_atoi_base(char *str, char *base)
{
	int result;
	int place_value;
	int i;

	if (!check(base) || ft_strlen(str) < 1)
		return (0);
	if (!base_has_str(str, base) && str[0] != '-')
		return (0);
	if (str[0] == '-')
		str++;
	result = 0;
	place_value = 1;
	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		result += place_value * get_number(str, base, i);
		place_value *= ft_strlen(base);
		i--;
	}
	if (*(str - 1) == '-')
		result *= -1;
	return (result);
}
