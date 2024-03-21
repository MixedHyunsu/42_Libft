/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunski2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:20:57 by hyunski2          #+#    #+#             */
/*   Updated: 2024/03/12 14:20:59 by hyunski2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*n_dst;
	unsigned char	*n_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	n_dst = (unsigned char *)dst;
	n_src = (unsigned char *)src;
	while (n-- > 0)
		*n_dst++ = *n_src++;
	return (dst);
}
