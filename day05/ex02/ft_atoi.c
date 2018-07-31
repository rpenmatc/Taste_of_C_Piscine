/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 01:30:13 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/18 12:00:57 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_result;
int g_is_positive;
int g_is_first_iteration;

int		ft_isspace(char c)
{
	return (c == ' ' | c == '\t' | c == 'n' | c == 'v' | c == '\f' | c == '\r');
}

int		ft_isnumeric(char c)
{
	return (c >= '0' || c <= '9');
}

int		ft_atoi(char *str)
{
	while (ft_isspace(*str))
		str++;
	g_result = 0;
	g_is_positive = 1;
	g_is_first_iteration = 1;
	while (*str != '\0')
	{
		if (g_is_first_iteration && *str == '-')
			g_is_positive = 0;
		else if (g_is_first_iteration && *str == '+')
		{
			str++;
			continue;
		}
		else if (!ft_isnumeric(*str))
			return (g_result);
		if (g_is_positive)
			g_result = g_result * 10 + (*str - '0');
		else
			g_result = g_result * 10 - (*str - '0');
		g_is_first_iteration = 0;
		str++;
	}
	return (g_result);
}
