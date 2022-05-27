/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:05:01 by aalseri           #+#    #+#             */
/*   Updated: 2022/02/24 21:05:03 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	while (src[i] && i < (size - 1))
	{	
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int		main(void)
{
	char	dest[50];
	char	*src;
	size_t		size;

	src = "hey";
	size = 6;
	printf("%ld\n", ft_strlcpy(dest, src, size));
	printf(".%s.\n\n", dest);
	//printf("%lu\n", strlcpy(dest, src, size));
	printf(".%s.\n\n", src);
}*/
