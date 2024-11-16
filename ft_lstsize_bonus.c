/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:10:14 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/09 10:10:16 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
// int main()
// {
// 	t_list *po;
// 	t_list *head;
// 	t_list *messi;

// 	head = malloc(sizeof(t_list));
// 	po = malloc(sizeof(t_list));
// 	messi = (t_list *)malloc(sizeof(t_list));
// 	head->content = "aka ";
// 	head->next = po;
// 	po->content = "super idol";
// 	po->next = messi;
// 	messi->content = "pessi";
// 	messi->next= NULL;

// 	printf("%d\n",ft_lstsize(head));
// 	free(po);
// 	free(head);
// 	free(messi);

// }