/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunski2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:58:49 by hyunski2          #+#    #+#             */
/*   Updated: 2024/03/12 14:58:50 by hyunski2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*n_dst;
	unsigned char	*n_src;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	n_dst = (unsigned char *)dst;
	n_src = (unsigned char *)src;
	if (n_src < n_dst)
	{
		while (len-- > 0)
			n_dst[len] = n_src[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			n_dst[i] = n_src[i];
			i++;
		}
	}
	return (n_dst);
}
