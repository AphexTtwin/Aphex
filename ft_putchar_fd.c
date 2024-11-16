/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:10:38 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/13 11:41:26 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
// int main()
// {
// 	 char c = 'y';
// 	 int fd = -1;// = open("file.txt", O_WRONLY | O_CREAT, 0644);
// 	// O_WRONLY opens the file in write-only mode.
// 	// O_CREAT creates the file if it doesn't exist.
// 	// 0644 sets the file permissions.

// 	ft_putchar_fd(c,fd);
// 	close(fd);
// }