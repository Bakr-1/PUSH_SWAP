/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:43:07 by aalseri           #+#    #+#             */
/*   Updated: 2022/09/12 18:04:36 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_putnbr(int nb)
{
	long	i;
	size_t	len;

	len = 0;
	i = (long)nb;
	if (i < 0)
	{
		ft_putchar('-');
		i *= -1;
		len++;
	}
	if (i > 9)
	{
		len += ft_putnbr(i / 10);
		len += ft_putchar(i % 10 + '0');
	}
	else
		len += ft_putchar(i + '0');
	return (len);
}

size_t	ft_putnbr_un(unsigned int nb)
{
	long	i;
	size_t	len;

	len = 0;
	i = (long)nb;
	if (i > 9)
	{
		len += ft_putnbr_un(i / 10);
		len += ft_putchar(i % 10 + '0');
	}
	else
		len += ft_putchar(i + '0');
	return (len);
}
