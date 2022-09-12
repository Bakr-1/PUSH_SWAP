/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:06:30 by aalseri           #+#    #+#             */
/*   Updated: 2022/06/26 14:40:18 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_calloc(1, sizeof(char)));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy((char *)str, (s + start), len + 1);
	return (str);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char const	*str;

// 	if (!s)
// 		return (NULL);
// 	if (len > ft_strlen(s))
// 		len = ft_strlen(s);
// 	str = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!str)
// 		return (NULL);
// 	if ((size_t)start >= ft_strlen(s))
// 		len = 0;
// 	ft_strlcpy((char *)str, (s + start), len + 1);
// 	return ((char *)str);
// }
// str is the dst and s+start is the src up to len + 1 for null terminator
// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	unsigned int	i;
// 	char			*str;

// 	if (!s)
// 		return (NULL);
// 	str = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!str)
// 		return (NULL);
// 	i = 0;
// 	if ((size_t)start >= ft_strlen(s))
// 		len = 0;
// 	while (s[start] && (i < len))
// 		str[i++] = s[start++];
// 	str[i] = '\0';
// 	return (str);
// }
