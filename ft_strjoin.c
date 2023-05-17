/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrig <rerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:02:18 by rerodrig          #+#    #+#             */
/*   Updated: 2023/05/17 14:02:18 by rerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"
// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*dest;
// 	size_t	len1;
// 	size_t	len2;

// 	if (!s1 && !s2)
// 		return (ft_strdup(""));
// 	if (s1 && !s2)
// 		return (ft_strdup(s1));
// 	if (!s1 && s2)
// 		return (ft_strdup(s2));
// 	len1 = ft_strlen(s1);
// 	len2 = ft_strlen(s2);
// 	dest = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
// 	if (!dest)
// 		return (NULL);
// 	ft_strlcpy(dest, s1, len1 + 1);
// 	ft_strlcat(dest, s2, len1 + len2 + 1);
// 	return (dest);
// }

/*int	main()
{
    char	str[] = "Junta te a mim, ";
    char	str1[] = "nos ja vivemos 100 mil anos!";
    ft_putendl_fd(ft_strjoin(str, str1), 1);
}*/
