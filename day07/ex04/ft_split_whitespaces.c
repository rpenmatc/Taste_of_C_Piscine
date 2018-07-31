/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <rpenmatc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 10:56:51 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/26 10:58:27 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define W1(c)	(c == ' ' ||  c == '\n' || c == '\t')
#define W2(c)	(c == '\v' || c == '\f' || c == '\r')

char	*ft_strncpy(char *src, unsigned int n)
{
	int		i;
	char	*res;

	i = 0;
	res = (char *)malloc((n + 1) * sizeof(char));
	while (i < (int)n)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int		ft_wordcount(char *str)
{
	int		i;
	int		ws;

	ws = 1;
	i = 0;
	while (*str)
	{
		if (W1(*str) || W2(*str))
			ws = 1;
		else
		{
			if (ws)
				i++;
			ws = 0;
		}
		str++;
	}
	return (i);
}

int		ft_wordlen(char *str)
{
	int		ln;

	ln = 0;
	while (!(W1(*str)) && !(W2(*str)) && *str != '\0')
	{
		ln++;
		str++;
	}
	return (ln);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		i;
	int		wordcount;
	int		ln;

	wordcount = ft_wordcount(str);
	i = 0;
	res = (char **)(malloc((wordcount + 1) * sizeof(char*)));
	res[wordcount] = NULL;
	while (i < wordcount)
	{
		if (W1(*str) || W2(*str))
			;
		else
		{
			ln = ft_wordlen(str);
			res[i] = ft_strncpy(str, ln);
			str += ln;
			i++;
		}
		str++;
	}
	return (res);
}
