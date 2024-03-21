/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunski2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:43:47 by hyunski2          #+#    #+#             */
/*   Updated: 2024/03/12 17:43:49 by hyunski2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*m;
	size_t	total_size;

	total_size = count * size;
	m = (void *)malloc(total_size);
	if (m == NULL)
		return (NULL);
	ft_bzero(m, total_size);
	return (m);
}
