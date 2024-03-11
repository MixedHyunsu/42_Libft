
#include "libft.h"

int	ft_atoi(const char *str)
{
	long	num;
	int	sign;

	sign = 1;
	num  = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		sign = -1;
	else if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		++str;
	}
	return (num * sign);
}
