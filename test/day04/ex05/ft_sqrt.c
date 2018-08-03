int ft_sqrt(int nb)
{
    int i;

    i = 0;
    while (i++ < nb)
    {
        if (i * i <= nb / 2)
            return (i);
    }
}