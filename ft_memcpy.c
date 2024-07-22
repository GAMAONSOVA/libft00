#include <stddef.h>

void *
memcpy( void * destptr, const void * srcptr, size_t num )
{
        size_t i = 0;
        char *d = destptr;
        char *s = srcptr;

        while( i != num)
        {
                d[i] = s[i];
                i++;
        }
        return d;
}
