/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrig <rerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:01:42 by rerodrig          #+#    #+#             */
/*   Updated: 2023/06/09 16:32:13 by rerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memset function: it takes a pointer to a memory block,
// a value to set the memory to, and the number of
// bytes to set. The function then sets each byte of the memory block to
// the specified value.
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
