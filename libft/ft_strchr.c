/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:04:16 by aalseri           #+#    #+#             */
/*   Updated: 2022/04/18 01:51:24 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strchr(const char *s, int c)
// {
// 	while (*s != ((char)c))
// 	{
// 		if (*s == '\0')
// 			return (0);
// 		s++;
// 	}
// 	return ((char *)s);
// }

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != ((char)c))
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}

// char	*ft_strnl(char *s)
// {
// 	if (!s)
// 		return (NULL);
// 	while (*s++ != '\n')
// 		if (*s == '\0')
// 			return (0);
// 	return (s);
// }