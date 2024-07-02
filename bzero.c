char
ft_bzero(int a,char *str)
{
	int i = 0;

	while(str[i] != a)
	{
		str[i] = 0;
		i++;
	}
}
