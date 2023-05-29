/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrig <rerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:47:13 by rerodrig          #+#    #+#             */
/*   Updated: 2023/05/29 14:30:30 by rerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// ft_lstiter
// void ft_lstiter(t_list *lst, void (*f)(void *));
// -
// lst: The address of a pointer to a node.
// f: The address of the function used to iterate on
// the list.
// None
// None
// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node.
// void	ft_lstiter(t_list *lst, void (*f)(void *))
// {
// 	t_list	*move;
// 	if (!lst)
// 		return ;
// 	move = lst;
// 	while (move != NULL)
// 	{
// 		f(move->content);
// 		move = move->next;
// 	}
// }
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		(*f)(lst -> content);
		lst = lst -> next;
	}
}
