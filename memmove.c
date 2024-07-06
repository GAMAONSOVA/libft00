#include <string.h>
#include <stddef.h>

void*
ft_memmove( void *dest,  const void *src, size_t a)
{
        size_t i = 0;
        unsigned char const *s = src;
        unsigned char *d = dest;

        if(*s < *d)
        {
                memcpy( d, s, a );
        }
        else
        {
                while(i != a)
                {
                        d[i] = s[i];
                        i--;
                }
        }
        return dest;
}
