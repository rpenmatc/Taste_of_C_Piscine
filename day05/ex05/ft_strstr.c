/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:58:19 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/17 10:08:03 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int a;
	int to_find_length;

	to_find_length = ft_strlen(to_find);
	i = 0;
	while (str[i])
	{
		a = 0;
		while (to_find[a] == str[i + a])
		{
			if (a == to_find_length - 1)
				return (str + i);
			a++;
		}
		i++;
	}
	return (0);
}
