/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:09:48 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/10 17:31:42 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
}

// int main()
// {
// 	t_list *last;
// 	t_list *head;
// 	t_list *po;
// 	t_list *new;

// 	head = (t_list *)malloc(sizeof(t_list));
// 	po = (t_list *)malloc(sizeof(t_list));
// 	last = (t_list *)malloc(sizeof(t_list));
// 	new = malloc(sizeof(t_list));

// 	head->content = "sky";
// 	head->next = po;
// 	po->content = "dazai";
// 	po->next = last;
// 	last->content = "im the last";
// 	last->next = NULL;
// 	new->content = "new one";
// 	new->next = NULL;

// 	ft_lstadd_back(&head, new);

// 	printf("addres lihaz po   :%s\n", last->content);
// 	printf("addres lihaz head :%s\n", head->next->next->next->content);

// }