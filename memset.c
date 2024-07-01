#include <stdio.h>

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
int
main()
{
        char c = '1';
        char abc[11] = "0987654321";
        int m = *ft_memset(c , abc);
        printf("%d", m);
}
