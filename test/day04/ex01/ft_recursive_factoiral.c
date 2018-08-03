int     ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    else if (nb == 0)
        return (1);
    return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
    return 0;
}

