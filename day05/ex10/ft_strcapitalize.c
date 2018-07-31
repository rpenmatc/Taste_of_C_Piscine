/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:58:19 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/17 10:12:48 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha_numeric(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	int		capitalize_next;
	char	*original;

	capitalize_next = 1;
	original = str;
	while (*str)
	{
		if (capitalize_next && *str >= 'a' && *str <= 'z')
			*str -= 32;
		else if (!capitalize_next && *str >= 'A' && *str <= 'Z')
			*str += 32;
		if (!is_alpha_numeric(*str))
			capitalize_next = 1;
		else
			capitalize_next = 0;
		str++;
	}
	return (original);
}
