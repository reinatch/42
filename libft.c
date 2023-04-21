/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrig <rerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:06:39 by rerodrig          #+#    #+#             */
/*   Updated: 2023/04/20 14:18:33 by rerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"
#include <ctype.h>

int main(int ac, char **av)
{
	char b = *av[1];
	(void)ac;
	// (void)av;
	// int b = 54;
	printf("%i\n", ft_isalpha(b));
	printf("%i\n", ft_isdigit(b));
	printf("%i\n", ft_isalnum(b));
	printf("%i\n", isalnum(b));
	return 0;
}
