/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <rpenmatc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 14:23:15 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/30 14:26:30 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*new_tab;

	i = 0;
	if (!(new_tab = (int *)malloc(sizeof(int) * length + 1)))
		return (NULL);
	while (i++ < length)
		new_tab[i] = f(tab[i]);
	return (new_tab);
}
