/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <rpenmatc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 14:23:15 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/31 15:58:40 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *temp;
	int i;

	i = 0;
	temp = (int*)malloc(sizeof(int) * length);
	while (i++ < length)
		temp[i] = f(tab[i]);
		i++;
	return (temp);
}