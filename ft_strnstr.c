/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:56:59 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/11 21:54:02 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	little_len = ft_strlen(little);
	i = 0;
	while (big[i] && i <= (len - little_len))
	{
		if ((big[i] == little[0]) && (ft_strncmp(&big[i], little,
					little_len)) == 0)
		{
			return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
// int main (void)
// {
// 	char string[] ="nig nigg in paris niggas in moscow";
// 	char *p;

//    p = ft_strnstr(string,"paris",9);

//    if(p)
//    {
//      printf ("%s\n",p);
//    }
//    else
//    {
//      printf("String not found!\n" );
//    }
//    return (0);
// }