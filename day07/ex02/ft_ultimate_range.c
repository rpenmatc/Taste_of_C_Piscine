/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <rpenmatc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 11:16:00 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/26 10:42:56 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *array;
	int *original_array;
	int original_min;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	original_min = min;
	array = (int *)malloc((max - min) * sizeof(int));
	original_array = array;
	while (min < max)
		*(array++) = min++;
	*range = original_array;
	return (max - original_min);
}
