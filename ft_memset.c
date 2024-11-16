/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:39:13 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/16 21:00:54 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*me;

	me = (unsigned char *)s;
	while (n--)
		*me++ = (unsigned char)c;
	return (s);
}
int main()
{
    char ok[8];  // Array of 8 chars (one byte each)
    
    // Set the first 8 bytes to the value 12 (0x0C in hexadecimal)
    ft_memset(ok, 12, sizeof(ok));  

    // Print the modified values as a string
    for (int i = 0; i < 8; i++) {
        printf("%d", ok[i]);  // Print each byte value (should be '12')
    }

    return 0;
}

// int	main(void)
// {
// 	unsigned char	ok[] = "cc cv";
// 	unsigned char	si;
// 	char			*hyper;

// 	si = 'A';
// 	//size_t ablo = 3;
// 	hyper = (char *) ft_memset(ok, si, 10);
// 	printf("%s\n", hyper);
// // }

// // 	size_t i;

// // 	me = (unsigned char *)s;
// // 	i = 0;
// // 	while (me[i] && i < n)
// // 	{
// // 		me[i] = (unsigned char)c;
// // 		i++;
// }
// int main()
// {
//     int arr[] = {0,1,2};
//     ft_memset(&arr, 5, 2);
//     ft_memset(&arr[0], 57, 1);
//     printf("%d\n", arr[0]);

// }