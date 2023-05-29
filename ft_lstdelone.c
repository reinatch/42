/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrig <rerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:46:34 by rerodrig          #+#    #+#             */
/*   Updated: 2023/05/29 14:29:37 by rerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// ft_lstdelone
// void ft_lstdelone(t_list *lst, void (*del)(void
// *));
// -
// lst: The node to free.
// del: The address of the function used to delete
// the content.
// None
// free
// Takes as a parameter a node and frees the memory of
// the node’s content using the function ’del’ given
// as a parameter and free the node. The memory of
// ’next’ must not be freed.

// void	ft_lstdelone(t_list *lst, void (*del)(void*))
// {
// 	if (!lst)
// 		return ;
// 	del(lst->content);
// 	free(lst);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	(*del)(lst->content);
	free(lst);
}
