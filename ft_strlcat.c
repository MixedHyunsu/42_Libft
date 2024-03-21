/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunski2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:21:36 by hyunski2          #+#    #+#             */
/*   Updated: 2024/03/12 14:21:49 by hyunski2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen((char *)src);
	i = 0;
	if (size < dest_len)
		return (size + src_len);
	else
	{
		while (src[i] && dest_len + i + 1 < size)
		{
			dest[dest_len + i] = src[i];
			i ++;
		}
		dest[dest_len + i] = '\0';
		return (src_len + dest_len);
	}
}
