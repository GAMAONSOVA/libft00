char*
ft_memset( char c, char*str)
{
        int i=0;

        while(str[i] != 0)
        {
                str[i] = c;
                i++;
        }
        return str;
}
