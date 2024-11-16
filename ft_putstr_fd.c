/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:10:47 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/10 22:26:19 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (fd < 0 || !s)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
// int main()
// {
// 	char ok[] = " ma niigaa";
// 		int fd = open("file.txt", O_WRONLY);
// 		// O_APPEND to add to the file.
// 		// O_TRUNC to change the file .

// 	ft_putstr_fd(ok, fd);

// }