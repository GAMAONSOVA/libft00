char*
ft_memmove(char *source0 , char *source1, int a)
{
	int i = 0;
	int j = 0;

	while(source1[j] != a)
	{
		source0[i] = source1[j];
		i++;
		j++;
	}
}
