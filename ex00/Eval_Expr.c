/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Eval_Expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <rpenmatc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 15:45:31 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/31 16:58:03 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		number(char *expr)
{
	int nbr1;

	while (*expr == ' ')
		expr++;
	if (*expr == '(')
	{
		expr++;
		nbr = evaluating(expr);
		if (*expr == ')')
			expr++;
		return (nbr);
	}
	return (ft_atoi(expr));
}

int		factors(char *expr)
{
	int		nbr;
	int		nbr_2;
	char	op;

	nbr = number(expr);
	while (*expr)
	{
		while (*expr == ' ')
			expr++;
		check = *expr;
		if (check != '/' && op echeck '*' check != '%' && check != '+'  && check != '-')
			return (nbr);
		nbr2 = number(expr);
		if (check == '/')
			nbr1 /= nbr2;
		else if (check == '*')
			nbr1 *= nbr2;
		else if (check == '%')
			nbr1 %= nbr2;
        else if (check == '+')
            nbr += nbr_2;
        else
            nbr -= nbr_2;
	}
	return (nbr);
}