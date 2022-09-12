/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:04:53 by aalseri           #+#    #+#             */
/*   Updated: 2022/06/26 14:40:16 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	d_size;
	size_t	s_size;

	s_size = ft_strlen(src);
	d_size = ft_strlen(dst);
	if (d_size > n)
		d_size = n;
	if (d_size == n)
		return (d_size + s_size);
	if (s_size < (n - d_size))
	{
		ft_memcpy(dst + d_size, src, s_size);
		dst[d_size + s_size] = '\0';
	}
	else
	{
		ft_memcpy((dst + d_size), src, (n - d_size - 1));
		dst[n - 1] = '\0';
	}
	return (d_size + s_size);
}
