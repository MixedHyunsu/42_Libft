/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunski2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:55:41 by hyunski2          #+#    #+#             */
/*   Updated: 2024/03/10 16:04:52 by hyunski2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
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
/*
#include <stdio.h>
#include <string.h>
//#include "libft.h"

int main() {
    char dest[20] = "Hello";
    char src[] = " World!";
    size_t size = sizeof(dest);

    // Using ft_strlcat
    size_t result = ft_strlcat(dest, src, size);
    printf("Result usingi ft_strlcat: %s\n", dest);
    printf("Length after concatenation: %zu\n", result);

    // Resetting dest for next test
    strcpy(dest, "Hello");

    // Using strcat to cmpare results
    strcat(dest, src);
    printf("\nResult using strcat: %s\n", dest);

    return 0;
}*/
