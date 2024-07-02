char*
ft_memcpy(char *str, char *mtr, int a)
{
        int i = 0;
        int l = 0;

        while(mtr[l] != a)
        {
                mtr[l] = str[i];
                i++;
                l++;
        }
}
