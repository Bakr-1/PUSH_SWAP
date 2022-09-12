/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:05:49 by aalseri           #+#    #+#             */
/*   Updated: 2022/06/26 14:40:17 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + i));
	while (i--)
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	return (NULL);
}
/*
int main()
{
	printf("mine: %s\n", ft_strrchr("where", 'e'));
	printf("og: %s\n", strrchr("where", 'e'));
}*/
