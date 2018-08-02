/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <rpenmatc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 13:29:15 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/08/01 13:33:39 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
    int     i;

    i = 'a';
    while (i <= 'z')
    {
        ft_putchar(i++);
    }
}

int main()
{
    ft_print_alphabet();
}