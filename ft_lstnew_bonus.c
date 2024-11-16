/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:10:11 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/12 17:15:14 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// typedef struct	s_list
// {
// 	void	*content;
// 	struct s_list *next;
// }t_list;
t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = malloc(sizeof(t_list));
	if (ptr == NULL)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
// int main()
// {
// 	t_list *no;
// 	char ok[] = "okkk";
// 	no = ft_lstnew(ok);
// 	printf("%s\n", (char *)no->content);
// 	return (0);
// 	free(no);
// }