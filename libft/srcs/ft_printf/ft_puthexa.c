/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:44:06 by aalseri           #+#    #+#             */
/*   Updated: 2022/09/12 18:04:31 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_puthexa(unsigned long long n, char c)
{
	char	*base;
	size_t	len;

	len = 0;
	base = "0123456789ABCDEF";
	if (c == 'x')
		base = "0123456789abcdef";
	if (n > 15)
		len += ft_puthexa(n / 16, c);
	len += ft_putchar(base[n % 16]);
	return (len);
}

size_t	ft_putpointer(unsigned long long p)
{
	size_t	len;

	len = 2;
	write(1, "0x", 2);
	if (p == 0)
	{
		write(1, "0", 1);
		return (3);
	}
	len += ft_puthexa(p, 'x');
	return (len);
}