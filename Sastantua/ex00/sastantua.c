/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <rpenmatc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 13:07:13 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/31 15:42:08 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putchar(char c);

void    ft_putstr(char *str)
{
    while (*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int result;
	int is_positive;
	int is_first_iteration;

	result = 0;
	is_positive = 1;
	is_first_iteration = 1;
	while (*str != '\0')
	{
		if (is_first_iteration && *str == '-')
			is_positive = 0;
		else if (*str < '0' || *str > '9')
			return (result);
		else if (is_positive)
			result = result * 10 + (*str - '0');
		else
			result = result * 10 - (*str - '0');
		is_first_iteration = 0;
		str++;
	}
	return (result);
}

void    print_door(int i, int width_of_door, int space_left, int door)
{
    int     pos_handle;

    pos_handle = door / 2;
    if ((space_left == pos_handle) && (width_of_door == (door / 2) - 1) && door > 3)
        ft_putchar('$');
    else
        ft_putchar('|');
    i++;
    width_of_door++;
}
int     print_lines(int nbr, int space_left, int size_of_door)
{
    int     i;
    int     c;
    int     width_of_door;

    width_of_door = size_of_door / 2;
    c = 0;
    i = 0;
    while (i++ < space_left)
        ft_putchar(' ');
    while (i <= nbr * 2)
    {
        while ((i == nbr + width_of_door) && (space_left < size_of_door) && (width_of_door <= size_of_door / 2))
            print_door(&i, &width_of_door, space_left, size_of_door);
        ft_putchar('*');
        ft_putchar('\n');
        return (space_left);
    }
}

