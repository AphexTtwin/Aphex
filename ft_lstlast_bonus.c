/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:03:53 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/12 15:25:46 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	if (!lst)
		return (NULL);
	ptr = lst;
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	return (ptr);
}
// int main()
// {
// 	t_list	*po;
// 	t_list	*head;
// 	t_list *riz;

// 	head = (t_list *)malloc(sizeof(t_list));
// 	po = malloc(sizeof(t_list));
// 	head->content = "flower";
// 	po->content = "mizo";
// 	head->next = po;
// 	po->next = NULL;
// 	riz = ft_lstlast(head);
// 	printf("%s", (char *)riz->content);

// }
