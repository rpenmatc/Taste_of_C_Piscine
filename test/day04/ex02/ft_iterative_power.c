int iterative_power(int nb, int power)
{
    int     i;
    int     res;

    i = 0;
    res = 1;
    if (nb < 0)
        return (0);
    while (i++ < power)
    {
        res *= nb; 
    }
    return (res);
}