/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 02:20:53 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/16 15:01:05 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int *min;

	i = 0;
	while (i < size - 1)
	{
		min = &tab[i];
		j = i + 1;
		while (j < size)
		{
			if (*min > tab[j])
			{
				min = &tab[j];
			}
			j++;
		}
		ft_swap(&tab[i], min);
		i++;
	}
}
