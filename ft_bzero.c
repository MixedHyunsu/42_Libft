
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	size_t	i;

	dest = s;
	i = 0;
	while(n--)
		dest[i++] = 0;

}
