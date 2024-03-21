/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunski2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:54:59 by hyunski2          #+#    #+#             */
/*   Updated: 2024/03/20 12:55:00 by hyunski2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	unsigned int	str_len;
	char			*str;

	str_len = (unsigned int)ft_strlen(s);
	str = (char *)malloc(sizeof(char) * str_len + 1);
	if (str == NULL)
		return (NULL);
	index = 0;
	while (index < str_len)
	{
		str[index] = (*f)(index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}
