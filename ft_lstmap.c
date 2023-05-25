/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrig <rerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:47:44 by rerodrig          #+#    #+#             */
/*   Updated: 2023/05/25 01:03:43 by rerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_lstmap
// t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
// void (*del)(void *));
// -
// lst: The address of a pointer to a node.
// f: The address of the function used to iterate on
// the list.
// del: The address of the function used to delete
// the content of a node if needed.
// The new list.
// NULL if the allocation fails.
// malloc, free
// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node. Creates a new
// list resulting of the successive applications of
// the function ’f’. The ’del’ function is used to
// delete the content of a node if needed.

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*move;
	t_list	*new;
	t_list	*old;

	move = ft_lstnew((*f)(lst->content));
	if (!lst || !move)
		return (NULL);
	new = move;
	old = lst-> next;
	while (old)
	{
		new->next = ft_lstnew((*f)(old->content));
		if (!(new->next))
		{
			ft_lstclear(&move, del);
			return (NULL);
		}
		new = new->next;
		old = old->next;

	}
	return (move);


}

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*head;
// 	t_list	*tmp;

// 	head = NULL;
// 	while (lst)
// 	{
// 		tmp = ft_lstnew((*f)(lst -> content));
// 		if (!tmp)
// 		{
// 			ft_lstclear(&head, del);
// 			return (NULL);
// 		}
// 		ft_lstadd_back(&head, tmp);
// 		lst = lst -> next;
// 	}
// 	return (head);
// }
