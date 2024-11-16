/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:43:51 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/09 10:07:54 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = 0;
}
// int main()
// {
//     unsigned char ok[6] = "cc cv";
//     unsigned char si = 'A';
//     //size_t ablo = 3;
//     ft_bzero(ok,sizeof(ok));
//     printf("%s\n", ok);
// }
