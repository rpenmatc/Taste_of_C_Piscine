int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	char * start = str;
	char * end = str + ft_strlen(str) - 1;
	while (end > start)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
	return (str);
}
