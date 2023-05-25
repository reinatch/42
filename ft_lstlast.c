/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrig <rerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:45:39 by rerodrig          #+#    #+#             */
/*   Updated: 2023/05/25 01:06:36 by rerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_lstlast
// t_list *ft_lstlast(t_list *lst);
// -
// lst: The beginning of the list.
// Last node of the list
// None
// Returns the last node of the list.
t_list *ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return(NULL);
	while (lst -> next)
		lst = lst -> next;
	return(lst);

}
