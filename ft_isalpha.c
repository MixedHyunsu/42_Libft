
#include "libft.h"

int	ft_isalpha(int c)
{
	if (64 < c && c < 91)
		return (1);
	else if (96 < c && c < 123)
		return (1);
	else
		return (0);
}