/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:43:34 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/12 11:20:03 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	to_copy;

	slen = ft_strlen(src);
	if (size == 0 && (src == NULL || dst == NULL))
		return (0);
	dlen = ft_strlen(dst);
	if (size <= dlen)
		return (size + slen);
	to_copy = size - dlen - 1;
	if (to_copy > slen)
		to_copy = slen;
	ft_memcpy(dst + dlen, src, to_copy);
	dst[dlen + to_copy] = '\0';
	return (dlen + slen);
}
// int main() {
//     char dst[10] = "hey";
//     const char *src = "nigga";

//     size_t result = ft_strlcat(dst, src, sizeof(dst));
//     printf("Result: %s\n", dst);
//     printf("Length: %zu\n", result);

//     return (0);
// }