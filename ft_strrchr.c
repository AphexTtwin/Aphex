/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:53:48 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/10 23:15:46 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	y;
	const char		*ok;

	ok = s;
	y = (unsigned char)c;
	while (*s)
	{
		s++;
	}
	while (s >= ok)
	{
		if (*s == y)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
// int main()
// {
//     int ok = 'e';
//     char *result = ft_strrchr("heeghy", 'h');
//     if (result)
//         printf("Found: %s\n", result);
//     else
//         printf("Not found\n");
//     return (0);
// }