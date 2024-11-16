/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:10:17 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/12 09:47:34 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	y;

	str = (unsigned char *)s;
	y = (unsigned char)c;
	while (n--)
	{
		if (*str == y)
			return (str);
		str++;
	}
	return (0);
}
// int main()
// {
//    unsigned char str1[] = "abcdef";
//    unsigned char hh = 'd';
// 	 int str1 = 1337;

//    int result = *(char*)ft_memchr(&str1, 5, 7);
//    printf("%d\n", result);

//    const char str[] = "abcdef";
//   int ch = 999;
//    char *ret;
//    ret = memchr(str, ch, 7);
//    printf("String after |%c| is - |%s|\n", ch, ret);
//    return(0);
//    int x = 270;
//    write(1,&x,10);
// }