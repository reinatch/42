/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrig <rerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:02:46 by rerodrig          #+#    #+#             */
/*   Updated: 2023/05/17 14:02:47 by rerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// str − This is the C string.

// c − This is the character to be located. It is passed as its int promotion, but it is internally converted back to char.
// This function returns a pointer to the last occurrence of character in str. If the value is not found, the function returns a null pointer.

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s) + 1;
	while (--i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&(s[i]));
	}
	return (NULL);
}
