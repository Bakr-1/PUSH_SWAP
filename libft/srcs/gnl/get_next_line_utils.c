/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 21:59:12 by aalseri           #+#    #+#             */
/*   Updated: 2022/06/18 22:10:44 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_gnl(char *str)
{
	if (*str == 0)
		return (0);
	return (ft_strlen_gnl(str + 1) + 1);
}

char	*ft_free_gnl(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		k;

	k = -1;
	i = -1;
	if (!s1)
	{
		s1 = malloc(sizeof(char));
		*s1 = '\0';
	}
	str = malloc((ft_strlen_gnl(s2) + ft_strlen_gnl(s1) + 1));
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++k])
		str[i++] = s2[k];
	str[i] = '\0';
	ft_free_gnl(&s1);
	return (str);
}

char	*ft_strnl(char *s)
{
	if (!s)
		return (NULL);
	while (*s != '\n')
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}

char	*stringdup(char *s)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (!s[i])
		return (ft_free_gnl(&s));
	str = malloc((ft_strlen_gnl(s) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (s[i])
		str[j++] = s[i++];
	str[j] = '\0';
	ft_free_gnl(&s);
	return (str);
}
