/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_purnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:43:46 by aalseri           #+#    #+#             */
/*   Updated: 2022/03/06 21:43:55 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_base(int nbr, int len, char *base)
{
	size_t	length;

	length = 0;
	if (nbr < len)
	{
		length += ft_putchar(base[nbr]);
	}
	else
	{
		length += ft_putnbr_base(nbr / len, len, base);
		length += ft_putchar(base[nbr % len]);
	}
	return (length);
}
