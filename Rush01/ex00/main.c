/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 10:21:03 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/24 10:03:34 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	make_board(int sud[9][9], int pos, int *found, int insert[9][9]);
int		check_sudoku(int sudoku[9][9]);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

int		is_valid_sudoku(int sudoku[9][9])
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (i <= 8)
	{
		j = 0;
		while (j <= 8)
			if (sudoku[i][j++] != 0)
				count++;
		i++;
	}
	return (count >= 17);
}

int		put_sudoku(char *argv[], int sudoku[9][9])
{
	int i;
	int j;

	i = 0;
	while (i <= 8)
	{
		if (ft_strlen(argv[i + 1]) != 9)
			return (0);
		j = 0;
		while (j <= 8)
		{
			if (argv[i + 1][j] >= '1' && argv[i + 1][j] <= '9')
				sudoku[i][j] = argv[i + 1][j] - '0';
			else if (argv[i + 1][j] == '.')
				sudoku[i][j] = 0;
			else
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	print_sudoku(int sudoku[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(sudoku[i][j] + '0');
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int		main(int argc, char *argv[])
{
	int found_solution;
	int i;
	int sudoku[9][9];
	int solution[9][9];

	if (argc != 10 || !put_sudoku(argv, sudoku))
	{
		ft_putstr("Error\n");
		return (-1);
	}
	else if (!is_valid_sudoku(sudoku) || !check_sudoku(sudoku))
	{
		ft_putstr("Error\n");
		return (-1);
	}
	found_solution = 0;
	make_board(sudoku, 0, &found_solution, solution);
	i = 0;
	if (found_solution != 1)
	{
		ft_putstr("Error\n");
		return (-1);
	}
	print_sudoku(solution);
	return (0);
}
