/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:09:58 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/12 15:25:36 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	freedom(void *ptr)
// {
// 	free(ptr);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
}

// int main()
// {
// 	t_list *po;
// 	t_list *head;
// 	t_list *teil;

// 	po = malloc(sizeof(t_list));
// 	head = malloc(sizeof(t_list));
// 	teil = malloc(sizeof(t_list));
// 	head->content = {0};
// 	head->next = po;
// 	po->content = {1};
// 	po->next = teil;
// 	teil->content = {2};
// 	teil->next = NULL;
// 	ft_lstdelone(po,freedom);
// 	printf("%s\n", head->content);
// 	free(head);
// 	free(po);
// 	free(teil);
// }