/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 01:30:13 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/16 14:59:01 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int result;
	int is_positive;
	int is_first_iteration;

	result = 0;
	is_positive = 1;
	is_first_iteration = 1;
	while (*str != '\0')
	{
		if (is_first_iteration && *str == '-')
			is_positive = 0;
		else if (*str < '0' || *str > '9')
			return (result);
		else if (is_positive)
			result = result * 10 + (*str - '0');
		else
			result = result * 10 - (*str - '0');
		is_first_iteration = 0;
		str++;
	}
	return (result);
}
