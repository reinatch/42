/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrig <rerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 18:03:31 by rerodrig          #+#    #+#             */
/*   Updated: 2023/05/17 14:00:52 by rerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// isalnum() checks whether the given character is alphanumeric or not.
// defined in ctype.h header file.
// Alphanumeric: A character that is either a letter or a number.
// Syntax: int isalnum(int x);

#include "./include/libft.h"

int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
    {
        return (8);
    }

    return (0);
}
