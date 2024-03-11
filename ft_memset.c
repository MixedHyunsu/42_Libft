
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	str;
	unsigned char	*dest;

	dest = s;
	str = c;
	while (n--)
		*dest++ = str;
	return (s);
}
