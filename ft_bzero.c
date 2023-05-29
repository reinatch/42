/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrig <rerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:00:36 by rerodrig          #+#    #+#             */
/*   Updated: 2023/05/29 14:08:48 by rerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// bzero is a function in the C programming language that sets a block of
// memory to zero. It is defined in the <strings.h> header file.

// The function takes two arguments: a pointer to the memory block and the
// size of the block to be set to zero. It is similar to the memset function,
// but is deprecated in favor of memset since the C11 standard.
// void ft_bzero(void *s, size_t n);

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*m;

	m = s;
	while (n)
	{
		*m++ = 0;
		--n;
	}
}
