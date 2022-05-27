/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:02:24 by aalseri           #+#    #+#             */
/*   Updated: 2022/02/24 21:02:27 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	if (!n)
		return (0);
	if (*ptr == (unsigned char)c)
		return ((char *)ptr);
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((char *)ptr);
		ptr++;
	}
	return (0);
}

/*
int     main()
{
	const char *str;
   // int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	str = (char *)ft_memchr("bonjour", 'n', 2);

	 printf("%s\n", str);
}*/
