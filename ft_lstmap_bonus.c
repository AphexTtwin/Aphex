/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:10:08 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/11 12:08:56 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	freedom(void *libr)
// {
// 	free(libr);
// }

// static void	*modcont(void *pt)
// {
// 	int	i;

// 	i = 0;
// 	while (((char *)pt)[i])
// 	{
// 		((char *)pt)[i] = 'A';
// 		i++;
// 	}
// 	return (pt);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tail;
	t_list	*ptr;

	head = NULL;
	ptr = lst;
	while (ptr)
	{
		tail = ft_lstnew(f(ptr->content));
		if (!tail)
		{
			ft_lstclear(&tail, del);
			return (NULL);
		}
		ft_lstadd_back(&head, tail);
		ptr = ptr->next;
	}
	return (head);
}
// int main()
// {
// 	t_list *head;
// 	t_list *po;
// 	t_list *tail;

// 	head = malloc(sizeof(t_list));
// 	head->content = ft_strdup("aaa");
// 	po = malloc(sizeof(t_list));
// 	po->content = ft_strdup("bbb");
// 	head->next = po;
// 	tail = malloc(sizeof(t_list));
// 	tail->content = ft_strdup("ccc");
// 	po->next = tail;
// 	tail->next = NULL;

// 	t_list *mapped_list = ft_lstmap(head, modcont, freedom);

// 	// Print to check contents
// 	t_list *tmp = mapped_list;
// 	while (tmp)
// 	{
// 		printf("%s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}

// 	// Free allocated memory
// 	ft_lstclear(&mapped_list, freedom);
// 	ft_lstclear(&head, freedom); // Free the original list

// 	return (0);
// }
