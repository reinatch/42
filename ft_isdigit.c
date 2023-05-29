/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrig <rerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:02:12 by rerodrig          #+#    #+#             */
/*   Updated: 2023/05/29 14:21:34 by rerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// isdigit()
// It is used to check if the passed character is a decimal digit character.
// Its syntax is -: isdigit(int c);
// It takes one parameter that is the character to be checked.
// Its return value is non-zero value if c is a digit, else it returns 0.
// It is defined in header file <ctype.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
