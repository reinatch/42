/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrig <rerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:05:11 by rerodrig          #+#    #+#             */
/*   Updated: 2023/05/29 13:51:13 by rerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// isalpha()
// It is used to check if the passed character is alphabetic. or not.
// Its syntax is -: isalpha(int c);
// It takes only one parameter that is the character to be checked.
// Its return value is non-zero value if c is an alphabet, else it returns 0.
// It is defined in header file <ctype.h>

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
