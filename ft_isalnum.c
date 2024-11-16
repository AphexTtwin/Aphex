/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:39:13 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/09 10:08:01 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (!(ft_isalpha(c)) && !(ft_isdigit(c)))
		return (0);
	return (1);
}
// int main()
// {
//     printf("%d\n",isalnum('9'));
//     printf("%d",ft_isalnum('9'));
// }
