/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <rpenmatc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 11:15:30 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/26 10:42:56 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *array;
	int *original_array;

	if (min >= max)
		return (0);
	array = (int *)malloc((max - min) * sizeof(int));
	original_array = array;
	while (min < max)
		*(array++) = min++;
	return (original_array);
}
