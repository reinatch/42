/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrig <rerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 18:49:46 by rerodrig          #+#    #+#             */
/*   Updated: 2023/05/17 14:02:32 by rerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strlen() function calculates the length of a given string.

// The strlen() function takes a string as an argument and returns its length. The returned value is of type size_t (an unsigned integer type).

// It is defined in the <string.h> header file
#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t i;
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
