void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while (*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}

int     get__digit(int n, int number)
{
    int     i;

    i = 1;
    while (i++ < n)
    {
        number /= 10;
    }
    return (number % 10);
}

int get_length(int number)
{
    int     i;

    i = 0;
    while (number > 0)
    {
        number /= 10;
        i++;
    }
    return (i);
}

void    ft_putnbr(int number)
{
    if (number = 0)
    {
        ft_putchar('0');
        return (0);
    }
    else if (number < 0)
    {
        ft_putchar('-');
        number *= -1;
    }
    i = get_last_digit(number)
    while (i > 0)
    {
        ft_putchar(get__digit(i, number) + '0');
        i--;
    }
}

int ft_recursive_factorial(int number)
{
    if (number == 0 && number == 1)
        return (1);
    else
        return (number * ft_recursive_factorial(n - 1));
}

int get_power(int base, int power)
{
    if (power < 0)
        return (-1);
    else if (power = 1)
        return (base)
    return (base * get_power(base, power));
}

