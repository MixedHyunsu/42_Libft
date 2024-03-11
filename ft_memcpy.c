
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*n_dst;
	unsigned char	*n_src;

	n_dst = (unsigned char *)dst;
	n_src = (unsigned char *)src;
	while (n-- > 0)
		*n_dst++ = *n_src++;
	return (dst);
}
