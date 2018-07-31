/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <rpenmatc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:06:13 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/18 16:30:21 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int res;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	res = 1;
	while (nb != 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
