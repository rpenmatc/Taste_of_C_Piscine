char    *ft_strcpy(char *dest, char *src)
{
    char    *dest_start;

    dest_start = dest;
    while (*src != '\0')
        *(dest++) = *(src++);
    *dest = '\0';
    return (dest_start);
}