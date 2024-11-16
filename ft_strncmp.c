/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:11:26 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/09 10:11:28 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ok;
	unsigned char	*bro;

	ok = (unsigned char *)s1;
	bro = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*ok != *bro)
			return (*ok - *bro);
		if (*ok == '\0')
			return (0);
		ok++;
		bro++;
	}
	return (0);
}
// int main()
// {
//     unsigned char me[] = "bd";
//     unsigned char you[] = "ba";

//     printf("%d", ft_strncmp(me, you, 2));
// }