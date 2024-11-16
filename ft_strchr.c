/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:43:17 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/09 10:10:57 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	y;

	y = (char)c;
	while (*s)
	{
		if (*s == y)
			return ((char *)s);
		s++;
	}
	if (y == '\0')
		return ((char *)s);
	return (NULL);
}
// int main() {
//     int ok = 'r';
//     char *result = ft_strchr("hey", ok);
//     if (result) {
//         printf("%s\n", result);
//     } else {
//         printf("Character not found.\n");
//     }

//     return (0);
// }