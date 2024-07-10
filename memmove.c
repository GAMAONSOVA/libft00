#include <string.h>
#include <stdio.h>
#include <stddef.h>

void*
ft_memmove( void *dest,  const void *src, size_t a)
{
        size_t i = 0;
        const char *s = (char *)src;
        char *d = (char *)dest;

        if(d < s)
        {
                 while (a-- > 0)
                        d[a] = s[a];
        }
        else
        {
                while(i != a)
                {
                        d[i] = s[i];
                        i++;
                }
        }
        return dest;
}
