/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrig <rerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:46:54 by rerodrig          #+#    #+#             */
/*   Updated: 2023/05/29 14:28:44 by rerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_lstclear
// void ft_lstclear(t_list **lst, void (*del)(void
// *));
// -
// lst: The address of a pointer to a node.
// del: The address of the function used to delete
// the content of the node.
// None
// free
// Deletes and frees the given node and every
// successor of that node, using the function ’del’
// and free(3).
// Finally, the pointer to the list must be set to
// NULL.

// void	*ft_lstclear(t_list **lst, void (*del)(void*))
// {
// 	t_list	*move;

// 	if (!lst)
// 		return (0);
// 	while (*lst != NULL)
// 	{
// 		move = (*lst)->next;
// 		ft_lstdelone(*lst, del);
// 		*lst = move;
// 	}
// 	return (0);
// }
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	head = *lst;
	while (head)
	{
		tmp = head -> next;
		(*del)(head -> content);
		free(head);
		head = tmp;
	}
	*lst = NULL;
}
