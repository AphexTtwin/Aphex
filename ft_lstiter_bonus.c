/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:10:02 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/09 18:44:23 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	addcontent(void *ptr)
// {
// 	printf("%s\n", (char *)ptr);
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// int main()
// {
// 	t_list *head;
// 	t_list *po;
// 	t_list *tail;

// 	head = malloc(sizeof(t_list));
// 	po = malloc(sizeof(t_list));
// 	tail = malloc(sizeof(t_list));

// 	head->content = "kompf";
// 	head->next = po;
// 	po->content = "wie viel";
// 	po->next = tail;
// 	tail->content = "wie geht";
// 	tail->next = NULL;

// 	ft_lstiter(head,addcontent);
// 	free(head);
// 	free(po);
// 	free(tail);
// }