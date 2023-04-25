/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrig <rerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 18:19:19 by rerodrig          #+#    #+#             */
/*   Updated: 2023/04/23 18:33:58 by rerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    //    isascii()
    //           checks whether c is a 7-bit unsigned char value that  fits  into
    //           the ASCII character set.

#include "./include/libft.h"

int ft_isascii(int c) {
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
