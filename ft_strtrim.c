/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunski2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:55:12 by hyunski2          #+#    #+#             */
/*   Updated: 2024/03/16 15:55:13 by hyunski2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_seter(char str, char const *set)
{
	int	index;

	index = 0;
	while (set[index] != '\0')
	{
		if (str == set[index])
			return (1);
		index++;
	}
	return (0);
}

static int	ft_setend(char const *s1, char const *set)
{
	int	index;

	index = (int)(ft_strlen(s1)) - 1;
	while (index >= 0)
	{
		if (ft_seter(s1[index], set) == 0)
			return (index);
		index--;
	}
	return (-1);
}

static int	ft_setstart(char const *s1, char const *set)
{
	int	index;

	index = 0;
	while (s1[index] != '\0')
	{
		if (ft_seter(s1[index], set) == 0)
			return (index);
		index++;
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		end;
	int		start;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = ft_setstart(s1, set);
	end = ft_setend(s1, set);
	if (start == -1 || end == -1)
	{
		str = (char *)malloc(1);
		str[0] = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, end - start + 2);
	return (str);
}
