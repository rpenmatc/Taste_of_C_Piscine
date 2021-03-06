/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoeth <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 16:50:34 by lsoeth            #+#    #+#             */
/*   Updated: 2018/07/14 17:32:51 by lsoeth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_line(char start, char middle, char end, int length)
{
	int i;

	if (length < 1)
		return ;
	ft_putchar(start);
	if (length < 2)
	{
		ft_putchar('\n');
		return ;
	}
	i = 0;
	while (i++ < length - 2)
		ft_putchar(middle);
	ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int length, int height)
{
	int i;

	if (height < 1)
		return ;
	write_line('A', 'B', 'A', length);
	if (height < 2)
		return ;
	i = 0;
	while (i++ < height - 2)
		write_line('B', ' ', 'B', length);
	write_line('C', 'B', 'C', length);
}
