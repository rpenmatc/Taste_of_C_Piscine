/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   develop_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 10:21:00 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/24 09:59:28 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_sudoku(int sudoku[9][9]);

void	copy_array(int dest[9][9], int src[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			dest[i][j] = src[i][j];
			j++;
		}
		i++;
	}
}

void	make_board(int sud[9][9], int pos, int *found, int insert[9][9])
{
	int	i;
	int	row;
	int	col;

	if (pos == 81)
	{
		(*found)++;
		copy_array(insert, sud);
		return ;
	}
	col = pos % 9;
	if (sud[(row = pos / 9)][col] != 0)
	{
		make_board(sud, pos + 1, found, insert);
		return ;
	}
	i = 1;
	while (i <= 9)
	{
		sud[row][col] = i++;
		if (check_sudoku(sud))
			make_board(sud, pos + 1, found, insert);
	}
	sud[row][col] = 0;
}
