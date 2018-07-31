/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 12:23:05 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/18 10:41:29 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		i;
	int		dest_len;

	dest_len = ft_strlen(dest);
	dest += dest_len;
	i = 0;
	while (*src && i++ + dest_len < size - 1)
	{
		*dest = *src;
		src++;
		dest++;
	}
	if (size < dest_len)
		return (size + ft_strlen(src));
	return (dest_len + ft_strlen(src));
}
