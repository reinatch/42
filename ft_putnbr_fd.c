/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrig <rerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:01:54 by rerodrig          #+#    #+#             */
/*   Updated: 2023/05/17 14:01:55 by rerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name ft_putnbr_fd
// Prototype void ft_putnbr_fd(int n, int fd);
// Turn in files -
// Parameters   n: The integer to output.
//              fd: The file descriptor on which to write.
// Return value None
// External functs. write
// Description Outputs the integer ’n’ to the given file
// descriptor.
#include "./include/libft.h"

// void	ft_putnbr_fd(int n, int fd)
// {
// 	if (n < 0)
// 	{
// 		if (n == -2147483648)
// 		{
// 			ft_putstr_fd("-2147483648", fd);
// 			return ;
// 		}
// 		ft_putchar_fd('-', fd);
// 		n = -n;
// 	}
// 	if (n / 10)
// 	{
// 		ft_putnbr_fd(n / 10, fd);
// 		ft_putnbr_fd(n % 10, fd);
// 	}
// 	else
// 		ft_putchar_fd('0' + n, fd);
// }
