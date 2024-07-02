char*
ft_memcpy(void *str, void *mtr, int a)
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
