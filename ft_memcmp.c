/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:10:20 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/10 22:22:32 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ok;
	unsigned char	*bro;

	ok = (unsigned char *)s1;
	bro = (unsigned char *)s2;
	while (n--)
	{
		if (*ok != *bro)
			return (*ok - *bro);
		ok++;
		bro++;
	}
	return (0);
}
// int main()
// {
//     unsigned char mimi[] = "cccv";
//     unsigned char bibi[] = "cccu";
//     printf("%u", ft_memcmp(mimi,bibi, sizeof(mimi)));
// }