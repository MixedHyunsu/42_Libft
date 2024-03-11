
#include "libft.h"

int	ft_isdigit(int c)
{
	if (47 < c && c < 58)
		return (1);
	else
		return (0);
}
