/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 10:21:12 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/23 18:27:30 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_blank_array(int array[], int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		array[i] = 0;
		i++;
	}
}

int		check_row(int sudoku[9][9], int row)
{
	int used[9];
	int i;
	int j;
	int last_pos;

	fill_blank_array(used, 9);
	i = 0;
	last_pos = 0;
	while (i < 9)
	{
		if (sudoku[row][i] != 0)
		{
			j = 0;
			while (used[j] != 0)
			{
				if (used[j++] == sudoku[row][i])
					return (0);
			}
			used[last_pos++] = sudoku[row][i];
		}
		i++;
	}
	return (1);
}

int		check_col(int sudoku[9][9], int col)
{
	int used[9];
	int i;
	int j;
	int last_pos;

	fill_blank_array(used, 9);
	i = 0;
	last_pos = 0;
	while (i < 9)
	{
		if (sudoku[i][col] != 0)
		{
			j = 0;
			while (used[j] != 0)
			{
				if (used[j++] == sudoku[i][col])
					return (0);
			}
			used[last_pos++] = sudoku[i][col];
		}
		i++;
	}
	return (1);
}

int		check_box(int sudoku[9][9], int row, int col, int i)
{
	int j;
	int used[9];
	int iterate_used;
	int last_pos;

	fill_blank_array(used, 9);
	last_pos = 0;
	while (++i < 3)
	{
		j = -1;
		while (++j < 3)
		{
			if (sudoku[row + i][col + j] != 0)
			{
				iterate_used = 0;
				while (used[iterate_used] != 0)
					if (used[iterate_used++] == sudoku[row + i][col + j])
						return (0);
				used[last_pos++] = sudoku[row + i][col + j];
			}
		}
	}
	return (1);
}

int		check_sudoku(int sudoku[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		if (!check_row(sudoku, i))
			return (0);
		else if (!check_col(sudoku, i))
			return (0);
		i++;
	}
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (!check_box(sudoku, i, j, -1))
				return (0);
			j += 3;
		}
		i += 3;
	}
	return (1);
}
