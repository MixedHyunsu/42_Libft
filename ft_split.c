/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunski2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:51:43 by hyunski2          #+#    #+#             */
/*   Updated: 2024/03/16 15:51:52 by hyunski2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static char	*strdup_until(char const *s, char c)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int	ft_split_helper(char const *s, char c, char **str_array, int index)
{
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			str_array[index] = strdup_until(s, c);
			if (str_array[index] == NULL)
			{
				while (index > 0)
					free(str_array[--index]);
				free(str_array);
				return (0);
			}
			index++;
			while (*s && *s != c)
				s++;
		}
	}
	return (index);
}

char	**ft_split(char const *s, char c)
{
	int		total_words;
	int		index;
	char	**str_array;

	if (s == NULL)
		return (NULL);
	total_words = count_words(s, c);
	str_array = (char **)malloc(sizeof(char *) * (total_words + 1));
	if (str_array == NULL)
		return (NULL);
	index = ft_split_helper(s, c, str_array, 0);
	str_array[index] = NULL;
	return (str_array);
}
