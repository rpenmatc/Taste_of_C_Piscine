#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int res;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	res = 1;
	while (nb != 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
