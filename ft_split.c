/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:10:51 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/13 20:31:23 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_strings(char const *str, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] != c && j == 0)
		{
			j = 1;
			k++;
		}
		else if (str[i] == c)
		{
			j = 0;
		}
		i++;
	}
	return (k);
}

static size_t	ft_count_char(char const *s, size_t i, char c)
{
	size_t	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

static char	**freedom(char **s, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(s[i]);
		s[i] = NULL;
		i++;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**strs;

	i = 0;
	j = 0;
	if (s == 0)
		return (0);
	strs = (char **)(malloc(sizeof(char *) * (ft_count_strings(s, c) + 1)));
	if (!strs)
		return (0);
	while (j < ft_count_strings(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		strs[j] = ft_substr(&s[i], 0, (ft_count_char(s, i, c)));
		if (!strs[j] && j < ft_count_strings(s, c))
			return (freedom(strs, j));
		i += ft_count_char(s, i, c);
		j++;
	}
	strs[j] = 0;
	return (strs);
}
