
int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
    if (nb < 2)
        return (2);
    while (!ft_is_prime(nb))
    {
        i++;
    }
    return (nb);
}