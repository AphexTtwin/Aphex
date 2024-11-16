/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:09:52 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/09 10:09:53 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// int main()
// {
// 	t_list *po;

// 	po = malloc(sizeof(t_list));
// 	po->content = "bombaklat";
// 	po->next = NULL;

// 	t_list *head;
// 	t_list *tail;

// 	head = malloc(sizeof(t_list));
// 	tail = malloc(sizeof(t_list));
// 	head->content = "dabla";
// 	head->next = tail;
// 	tail->content = "sbagh";
// 	tail = malloc(sizeof(t_list));
// 	head->next->next  = tail;

// 	tail->next = NULL;
// 	ft_lstadd_front(&head, po);
// 	printf("%s\n", po->content);
// 	printf("addres lihaz po   :%s\n", po->content);
// 	printf("addres lihaz head :%s\n", head->next->content);

// 	t_list *current = head;
//     t_list *next;
//     while (current != NULL) {
//         next = current->next;
//         free(current);
//         current = next;
//     }

//     return (0);
// }
