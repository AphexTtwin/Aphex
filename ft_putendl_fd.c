/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:10:41 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/10 22:24:47 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0 || !s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
// int main()
// {
// 	char ok[] = " ma niigaa";
// 		// int fd = open("file.txt", O_WRONLY);
// 		// O_APPEND to add to the file.
// 		// O_TRUNC to change the file .

// 	ft_putendl_fd(ok, 1);
// }