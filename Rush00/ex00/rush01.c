/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoeth <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 16:52:40 by lsoeth            #+#    #+#             */
/*   Updated: 2018/07/14 17:32:40 by lsoeth           ###   ########.fr       */
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
	write_line('/', '*', '\\', length);
	if (height < 2)
		return ;
	i = 0;
	while (i++ < height - 2)
		write_line('*', ' ', '*', length);
	write_line('\\', '*', '/', length);
}
