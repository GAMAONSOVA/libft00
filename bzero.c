#include <string.h>

void
ft_bzero(void *str, size_t a)
{
	size_t i = 0;
	char *s = (char *) = *str;

	while(i != a)
	{
		str[i] = 0;
		i++;
	}
}
