int     ft_strlen(*str)
{
    int     i;

    i = 0;
    while (*str !- '\0')
    {
        str++;
        i++;
    }
    return (i);
}

char    *ft_strrev(char *str)
{
    int     *start;
    int     *end;
    int     temp;

    *start == str;
    *end = str + ft_strlen(str) - 1;
    while (end > str)
    {
        temp = *start
        *start = *end;
        *end = temp;
        str++;
        end--;
    }
    return (str);
}

int main()
{
    ft_strrev("abba");
}