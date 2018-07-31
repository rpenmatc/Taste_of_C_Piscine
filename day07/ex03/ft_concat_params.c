/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <rpenmatc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 11:18:52 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/26 10:42:56 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	char *iterate_dest;

	iterate_dest = dest + ft_strlen(dest);
	while (*src)
	{
		*iterate_dest = *src;
		src++;
		iterate_dest++;
	}
	*iterate_dest = '\0';
	return (dest);
}

int		get_length(int argc, char **argv)
{
	int i;
	int length;

	length = 0;
	i = 0;
	while (i < argc)
	{
		length += ft_strlen(argv[i]);
		i++;
	}
	return (length + argc);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*result;
	int		i;
	int		length;

	length = get_length(argc, argv);
	result = malloc(length * sizeof(char));
	i = 0;
	while (i < argc)
	{
		ft_strcat(result, argv[i]);
		ft_strcat(result, "\n");
		i++;
	}
	result[length - 1] = '\0';
	return (result);
}
