/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_crazy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:40:07 by aalseri           #+#    #+#             */
/*   Updated: 2022/03/06 21:40:33 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_crazy(const char *str, va_list ptr)
{	
	size_t	len;

	len = 0;
	if (*str == 'd')
		len += ft_putnbr(va_arg(ptr, int));
	else if (*str == 'c')
		len += ft_putchar(va_arg(ptr, int));
	else if (*str == 'u')
		len += ft_putnbr_un(va_arg(ptr, unsigned int));
	else if (*str == 's')
		len += ft_putstr(va_arg(ptr, char *));
	else if (*str == 'i')
		len += ft_putnbr(va_arg(ptr, int));
	else if (*str == '%')
		len += ft_putchar('%');
	else if (*str == 'x' || *str == 'X')
		len += ft_puthexa(va_arg(ptr, unsigned int), *str);
	else if (*str == 'p')
		len += ft_putpointer(va_arg(ptr, unsigned long long));
	return (len);
}
