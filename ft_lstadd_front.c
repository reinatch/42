/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrig <rerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:44:06 by rerodrig          #+#    #+#             */
/*   Updated: 2023/05/29 14:25:37 by rerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// ft_lstadd_front
// void ft_lstadd_front(t_list **lst, t_list *new);
// -
// lst: The address of a pointer to the first link of
// a list.
// new: The address of a pointer to the node to be
// added to the list.
// None
// None
// Adds the node ’new’ at the beginning of the list.
// void	ft_lstadd_front(t_list **lst, t_list *new)
// {
// 	if (!new)
// 		return ;
// 	if (!lst)
// 	{
// 		*lst = new;
// 		return ;
// 	}
// 	new->next = *lst;
// 	*lst = new;
// }
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
