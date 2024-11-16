/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:43:39 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/12 12:13:44 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*surc;

	dst = (unsigned char *)dest;
	surc = (const unsigned char *)src;
	if (!dst && !surc)
		return (0);
	if (dst == surc || n == 0)
		return (dest);
	if (dst < surc)
	{
		while (n--)
			*dst++ = *surc++;
	}
	else
	{
		dst += n;
		surc += n;
		while (n--)
			*--dst = *--surc;
	}
	return ((void *)dest);
}

// int main()
// {
// 	char ok[] = "";
// 	// printf("%d\n", sizeof(ok));
// 	// printf("%d\n", strlen(ok));
// 	// int ok[4]= {1,2,3,4};
// 	char sp[] = "qwqq";
// 	printf("%s\n", (char *)ft_memmove(ok, ok, 4));
// 	// printf("%s\n", ok);
// }