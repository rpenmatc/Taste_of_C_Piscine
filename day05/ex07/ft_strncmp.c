/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:58:19 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/17 10:10:42 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2)
{
	char	s1_current;
	char	s2_current;
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		s1_current = s1[i];
		s2_current = s2[i];
		if (s1_current >= 97 && s1_current <= 122)
			s1_current -= 32;
		if (s2_current >= 97 && s2_current <= 122)
			s2_current -= 32;
		if (s1_current < s2_current)
			return (-1);
		else if (s1_current > s2_current)
			return (1);
		i++;
	}
	return (0);
}
